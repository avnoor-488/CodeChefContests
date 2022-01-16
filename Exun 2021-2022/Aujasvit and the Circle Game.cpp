
// Aujasvit just came up with a new game to play with his friends. N people stand in a circle, each assigned an index from 1 to N in clockwise order. Then the following operation is done N−1 times.

// The person with the lowest index holds a coin.
// Then, the coin then moves to the next person clockwise M−1 times.
// Then, the person who is holding the coin is removed from the circle.
// The last person remaining after N−1 operations is the winner.

// Aujasvit has already decided on the integer M to be used in the game. Before inviting people to play his game, Aujasvit wants to know the winner if the game has 1 player, 2 players, 3 players, …, X players. That is, you need to output the winner when N=1,N=2,...,N=X.

#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
// #define num 4 e6 + 5



typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vv;
typedef vector<vector<string>> vss;
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


void solve()
{
    ll m, x;
    cin >> m >> x;
    m--;
    vi vec;
    vec.pb(1);

    ll p;
    for (ll i = 1; i < x; i++) {
        p = (m % (i + 1)) + 1;
        if (vec[i - 1] < p)
            vec[i] = vec[i - 1];
        else vec[i] = vec[i - 1] + 1;
    }
    for (int i = 0; i < x; i++) {
        cout << vec[i] << ' ';
    }
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


