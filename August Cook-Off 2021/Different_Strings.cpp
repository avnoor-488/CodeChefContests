// You are given NN binary strings of length NN each. You need to find a binary string of length NN which is different from all of the given strings.

// Note:

// A binary string is defined as a string consisting only of '0' and '1'.
// A string is considered different from another string when they have different lengths, or when they differ in at least one position.

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
    int n;
    cin >> n;
    string str[n];
    forN(n)cin >> str[j];

    string ans;
    forN(n)
    {
        if (str[j][j] == '0')
            ans =  ans + '1';
        else
            ans = ans + '0';
    }
    cout << ans << endl;
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
