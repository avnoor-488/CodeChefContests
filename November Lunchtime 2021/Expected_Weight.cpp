// Given a sequence A of length N, the weight of this sequence is defined as

// weight(A)=∑i=1Ni⋅Ai
// Given an integer N, we pick a permutation A of [1,2…N] uniformly at random. What is the expected weight of this permutation?

// It can be shown that the answer can be represented as PQ where P and Q are coprime integers and Q≠0(mod998244353). Print the value of P⋅Q−1 modulo 998244353.

#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
// #define num 4e6 + 5



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


void solve()
{
    int n;
    cin >> n;
    int num = n;
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        int r = c2calc(n * (n + 1), 2);
        int z = c2calc(r * r, 1);
        cout << c2calc(z, n) << endl;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // vi vec;
    // forT(n)
    // {
    //     int no;
    //     cin >> no;
    //     vec.pb(no);

    // }
    while (t--) 
    {
        solve();
    }

    return 0;
}

// coded with the ❤️ Avnoor

