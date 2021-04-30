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




int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    forT(t)
    {
        ll n, w, wr;
        cin >> n >> w >> wr;
        map<ll, ll>m;
        vector<ll>v;
        forN(n)
        {
            ll no;
            cin >> no;
            v.pb(no);
            // cin >> v[i];
            m[v[i]]++;

        }

        if (wr >= w)cout << "YES" << endl;
        else
        {
            w -= wr;
            forN(n)
            {
                if (m[v[i]] >= 2)
                {
                    ll count = m[v[i]];
                    if (count % 2 == 0)w -= count * v[i];
                    else w -= (count - 1) * v[i];
                    m[v[i]] = 0;
                }
                if (w <= 0)break;

            }
            if (w <= 0)cout << "YES" << endl;
            else cout << "NO" << endl;


        }

    }
}


// coded with the ❤️ Avnoor;
