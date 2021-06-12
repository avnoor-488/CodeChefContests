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

ll dp[100010][110][2];
ll arr[100010];


void solve() {

    ll n, K;
    cin >> n >> K;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n + 3; i++) {
        for (int j = 0; j <= K + 2; j++)
            dp[i][j][0] = dp[i][j][1] = -1e16;
    }
    dp[n + 1][K][0] = dp[n + 1][K][1] = 0;
    for (int idx = n; idx >= 1; idx--) {
        for (int k = 0; k <= K; k++) {
            dp[idx][k][0] = max(dp[idx + 1][k][0], dp[idx + 1][k + 1][1] + arr[idx] * (k + 1));
            dp[idx][k][1] = max(dp[idx][k][0], dp[idx + 1][k][1] + arr[idx] * k);
        }
    }
    cout << dp[1][0][0] << endl;
}

int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin >> t;
    forT(t) solve();

    return 0;

}

// coded with the ❤️ Avnoor

