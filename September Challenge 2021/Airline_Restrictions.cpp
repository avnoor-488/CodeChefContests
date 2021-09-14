// Chef has 33 bags that she wants to take on a flight. They weigh AA, BB, and CC kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.
// The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed DD kgs and the weight of the bag which is carried cannot exceed EE kgs. 
// Find if Chef can take all the three bags on the flight.


#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long ll;
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
    if (x.fi != y.fi)
        return x.fi > y.fi;
    else
        return x.sec > y.sec;
}




void solve()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if ((a + b <= d && c <= e) || (b + c <= d  && a <= e) || ( a + c <= d && b <= e))cout << "yes" << endl;
    else cout << "no" << endl;
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

    while (t--)
    {
        solve();
    }
}




// coded with the ❤️ Avnoor
