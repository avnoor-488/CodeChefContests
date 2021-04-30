#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int i=0;i<n;i++)


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

    ll t, count = 0;
    cin >> t;

    forT(t)
    {
        vector<int>zero, one;
        ll len;
        cin >> len;
        // cout << len << endl;
        int count = 0;
        string str;
        cin >> str;
        // cout<<

        forN(len)
        {
            // cin>>ch[j];
            if (str[i] == '0')zero.pb(0);
            else one.pb(1);

            if (one.size() >= zero.size())
            {
                count = 1;
                break;
            }
        }

        if (count == 1)cout << "yes" << endl;
        else cout << "no" << endl;
    }

}


// coded with the ❤️ Avnoor;
