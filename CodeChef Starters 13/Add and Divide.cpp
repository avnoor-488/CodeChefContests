// You are given two positive integers aa and bb. You also have a number xx, which is initially set to 00. At first, 
// you can add aa to xx any number of times. After that, you can divide xx by bb any number of times as long as xx is divisible by bb.
// Print YES if you can make xx equal to 11, otherwise print NO.

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
    if (x.fi != y.fi)
        return x.fi > y.fi;
    else
        return x.sec > y.sec;
}


bool solve(ll a, ll b)
{
    if (a == 1)
        return true;
    else if (__gcd(a, b) == 1)
        return false;
    else if (__gcd(a, b) != 1)
        return solve((a / __gcd(a, b)), b);
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
        ll a, b;
        cin >> a >> b;
        if (solve(a, b))cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}




// coded with the ❤️ Avnoor
