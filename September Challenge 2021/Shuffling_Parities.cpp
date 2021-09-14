// Chef is given an array AA consisting of NN positive integers. 
// Chef shuffles the array AA and creates a new array BB of length NN, where Bi=(Ai+i)mod2Bi=(Ai+i)mod2, for each i(1≤i≤N)i(1≤i≤N).
// Find the maximum possible sum of integers of the array BB, if Chef shuffles the array AA optimally.


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
    // vi vec;
    int freq[2] = {0};

    for (int i = 0; i < n; i++)
    {
        int no; cin >> no;
        if (no % 2 == 0)freq[0]++;
        else freq[1]++;
    }

    if (n % 2 == 0)
    {
        cout << min(freq[1], n / 2) + min(freq[0], n / 2) << endl;
    }
    else
    {
        cout << min(freq[0], n / 2 + 1) + min(freq[1], n / 2) << endl;
    }


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
