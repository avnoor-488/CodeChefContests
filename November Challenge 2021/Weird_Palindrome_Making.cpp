#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 10000000007


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;



void fastscan(int &number)
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

bool comp(pair<int, int> x, pair<int, int> y)
{
    // if (x.fi != y.fi)
    //     return x.fi < y.fi;
    // else
    return x.sec < y.sec;
}



void solve()
{
        ll n;
        cin>>n;
        ll a[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count+=a[i]%2;
        }
        count/=2;
        cout<<f<<endl;

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

    while (t--)
    {
        solve();
    }
    // cout << solve(vec, vec2);
    return 0;
}




// coded with the ❤️ Avnoor
