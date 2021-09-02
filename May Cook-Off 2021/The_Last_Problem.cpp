
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

void solve(int vec[1001][1001])
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll sum = 0;
    for (int i = x1; i <= x2; i++)
        sum += vec[i][y1];
    for (int i = y1 + 1; i <= y2; i++)
        sum += vec[x2][i];
    cout << sum << endl;

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
    int vec[1001][1001];
    vec[1][1] = 1;
    ll p = 0;
    for (int i = 2; i <= 1000; i++)
        vec[i][1] = vec[i - 1][1] + i;
    for (int i = 1; i <= 1000; i++)
    {
        p = i;
        for (int j = 2; j <= 1000; j++)
            vec[i][j] = vec[i][j - 1] + p++;
    }

    while (t--)
    {
        solve(vec);
    }
}




// coded with the ❤️ Avnoor
