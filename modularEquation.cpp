#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=1;j<=n;j++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long ll;
typedef vector<ll> vi;


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
    ll t;
    cin >> t;
    forT(t)
    {
        ll n, m;
        cin >> n >> m;
        ll count = 0;
        vi v (n + 1, 1);
        for (ll a = 2; a <= n; a++) {
            ll mod1 = m % a;
            count += v[mod1];
            for (int b = mod1; b <= n; b += a) {
                v[b]++;
            }
        }
        cout << count << endl;
    }




}

// coded with the ❤️ Avnoor;

