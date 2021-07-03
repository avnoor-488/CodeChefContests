#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
#define num 4e6 + 5


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;


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


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int arr[k];
        forN(k)cin >> arr[j];

        if (n == 1)
        {
            for (int i = 0; i < k; i++)
                cout << 0 << endl;
            continue;
        }

        ll distance = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                distance += 2;
            else
                distance += 1;

        }

        for (int i = 0; i < k; i++)
        {
            if (arr[i] == 1 )
            {
                if (s[0] == s[1])
                    distance--;
                else
                    distance++;

            }
            else if (arr[i] == n)
            {
                if (s[n - 1] == s[n - 2])
                    distance--;
                else
                    distance++;
            }
            else
            {
                int temp = 0;
                if (s[arr[i] - 1] == s[arr[i] - 2])
                    temp = temp + 2;
                if (s[arr[i] - 1] != s[arr[i] - 2])
                    temp += 1;
                if (s[arr[i] - 1] != s[arr[i]])
                    temp += 1;
                if (s[arr[i] - 1] == s[arr[i]])
                {
                    temp++; temp++;
                }
                if (temp == 4) distance = distance - 2;
                if (temp == 2)distance = distance + 2;
            }
            if (s[arr[i] - 1] == '0')
                s[arr[i] - 1] = '1';
            else
                s[arr[i] - 1] = '0';
            cout << distance << endl;
        }
    }

    return 0;

}

// coded with the ❤️ Avnoor

