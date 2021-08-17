#include <bits/stdc++.h>
using namespace std;

// #define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;


void fastscan( int &number)
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

void solve()
{


    // map<int, int>mp;
    ll n, p, k;
    cin >> n >> p >> k;


    // map<int, int>::iterator it;
    // for (auto it : mp)
    //     cout << it.first << " " << it.sec << " " << endl;

    // cout << mp.size() << " " << endl;
    // cout << endl;

    ll num = (p % k) - 1 ;
    ll  num1 = ((n - 1) / k) * k;
    num1 = n - 1 - num1;
    // ll num1 = n - 1 - limit;


    ll count = 0;
    if (num > num1)
        count = (num1 + 1) * ((n - 1) / k + 1) + (num - num1) * ((n - 1) / k);
    else
        count = ((n - 1) / k + 1) * (num + 1);


    for (ll i = num + 1 ; i <= n - 1 ; i += k)
    {
        count++;
        if (i == p)
        {
            cout << count << endl;
            break;
        }
        // else contin/ue;

    }

    // cout << count << endl;
}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t ;
    while (t--)
    {
        solve();
    }

}
// return 0;





// coded with the ❤️ Avnoor
