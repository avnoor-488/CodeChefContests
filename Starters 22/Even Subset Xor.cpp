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
#define vll vector<ll>
#define pll pair<ll, ll>




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


void solve(int input)
{
    vll temp;
    for (int i = 0; i < 17; i++) {
        for (int j = i + 1; j < 18; j++) {
            for (int k = j + 1; k < 19; k++) {
                for (int l = k + 1; l < 20; l++) {
                    ll val = (1 << l) + (1 << k) + (1 << j) + (1 << i);
                    temp.pb(val);
                }
                if (temp.size() == 1000) {
                    break;
                }
            }
            if (temp.size() == 1000) {
                break;
            }
        }
        if (temp.size() == 1000) {
            break;
        }
    }


    for (int i = 0; i < input; i++) {
        cout << temp[i] << " ";
    } cout << endl;
}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, tc = 1;
    cin >> t;


    while (t++ < tc) {
        int input; cin >> input;
        solve(input);
    }

    return 0;
}

// coded with the ❤️ Avnoor


