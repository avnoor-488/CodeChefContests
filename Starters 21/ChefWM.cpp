#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
// #define num 4 e6 + 5



typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;
// typedef map<int,int>

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



ll gcd (ll a, ll b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int c2calc(int p,
           int q)
{
    int mod = 998244353, expo;
    expo = mod - 2;
    while (expo)
    {
        if (expo & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}
static unordered_set<string> ops({"+", "-", "*", "/"});


void solve()
{
    int n, m;
    cin >> n >> m;
    int res = 0, temp = m;
    for (int i = 2; i * i <= m; i++)
    {
        if ((temp % i) == 0)
        {
            res++;
            while ((temp % i) == 0) {
                temp = temp / i;
            }
        }
    }
    if (temp > 1)
    {
        res++;
    }

    vi ans;
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            ans.push_back(i);
            if (i != (n % i))
            {
                ans.push_back(n / i);
            }
        }
    }
    int f = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] <= res)
            f = ans[i];
    }
    cout << f << endl;


}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;


    while (t--) {
        solve();
    }

    return 0;
}

// coded with the ❤️ Avnoor

