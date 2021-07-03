#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int i=0;i<n;i++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long ll;



void fastscan( ll &number)
{
    bool negative = false;
    register int c;

    number = 0;

    c = getchar();
    if (c == '-')
    {
        negative = true;

        c = getchar();
    }

    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;


    if (negative)
        number *= -1;
}

ll solve(vector<vector<ll>> &a, ll k)
{
	
    ll n = a.size();
    ll m = a[0].size();
    bool ans = false;
    ll mn = 5000;
    vector<vector<ll>> stripSum(n, vector<ll>(m, 0));
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += a[i][j];
        stripSum[0][j] = sum;

        for (int i = 1; i < n - k + 1; i++)
        {
            sum += (a[i + k - 1][j] - a[i - 1][j]);
            stripSum[i][j] = sum;
        }
    }

    for (int i = 0; i < n - k + 1; i++)
    {
        ll sum = 0;
        for (int j = 0; j < k; j++)
            sum += stripSum[i][j];
        // cout << sum << "  ";
        if (sum == k * k)
        {
            return 0;
        }
        else
        {
            mn = min(mn, k * k - sum);
        }
        for (int j = 1; j < m - k + 1; j++)
        {
            sum += (stripSum[i][j + k - 1] - stripSum[i][j - 1]);
            // cout << sum << "  ";
            if (sum == k * k)
            {
                return 0;
            }
            else
            {
                mn = min(mn, k * k - sum);
            }
        }

        // cout << endl;
    }
    // cout<<mn<<endl;
    return mn;
	
	
	

}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll x[n * m + 1], y[n * m + 1];
        
        for (size_t i = 0; i < n * m; i++)
            cin >> x[i + 1] >> y[i + 1];
        
        ll left = 1, right = n * m;
        string ans = "Draw";
        ll steps = 10000000;
        ll mul = (n + 2) * (m + 2);
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            vector<vector<int> > status(n + 5, vector<int>(m + 5, 0));
            for (int i = 1; i <= mid; i++)
            {
                if (i & 1)
                    status[x[i]][y[i]] = 1;
                else
                    status[x[i]][y[i]] = 2;
            }
            ll fn = 0;
            vector<vector<int> > cls(n + 2, vector<int>(m + 2, 0));
            for (int i = n; i >= 1; i--)
            {
                for (int j = 1; j <= m; j++)
                {
                    if (status[i][j] == 1)
                        cls[i][j] = cls[i + 1][j] + 1;
                    else
                        cls[i][j] = 0;
                }
            }
            for (int i = n; i >= 1; i--)
            {
                for (int j = m; j >= 1; j--)
                {
                    if (cls[i][j] >= k)
                        cls[i][j] = cls[i][j + 1] + 1;
                    else
                        cls[i][j] = 0;
                    if (cls[i][j] >= k)
                        fn = 1;
                }
            }
            cls.clear();
            cls.resize(n + 2, vector<int>(m + 2, 0));
            for (int i = n; i >= 1; i--)
            {
                for (int j = 1; j <= m; j++)
                {
                    if (status[i][j] == 2)
                        cls[i][j] = cls[i + 1][j] + 1;
                    else
                        cls[i][j] = 0;
                }
            }
            for (int i = n; i >= 1; i--)
            {
                for (int j = m; j >= 1; j--)
                {
                    if (cls[i][j] >= k)
                        cls[i][j] = cls[i][j + 1] + 1;
                    else
                        cls[i][j] = 0;
                    if (cls[i][j] >= k)
                        fn = 2;
                }
            }
            
            if (fn == 0)
            {
                left = mid + 1;
            }
            else
            {
                if (mid < steps)
                {
                    steps = mid;
                    if (fn == 1)
                        ans = "Alice";
                    else
                        ans = "Bob";
                }
                right = mid - 1;
            }
        }
        cout << ans <<endl;
    }
}
// coded with the ❤️ Avnoor;
