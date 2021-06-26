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
    ll inp;
    vector<ll> v,r,r2;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v.pb(inp);
        }
        forN(n)
        {
            if(v[i]%2==0)
            {
                r.pb(v[i]);
            }
            else
            {
                r2.pb(v[i]);
            }
        }
        forN(r2.size())
        {
            r.pb(r2[i]);
        }
        forN(r.size())
        {
            cout<<r[i]<<" ";
        }
        cout<<endl;
        v.clear();
        r.clear();
        r2.clear();
        
    }
}
// coded with the ❤️ Avnoor;
