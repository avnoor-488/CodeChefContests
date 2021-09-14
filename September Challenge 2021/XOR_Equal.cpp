// You are given an array AA consisting of NN integers and an integer XX. Your goal is to have as many equal integers as possible in the array.
// To achieve this goal, you can do the following operation:
// Choose an index ii (1≤i≤N)(1≤i≤N) and set Ai=Ai⊕XAi=Ai⊕X, where ⊕⊕ denotes the bitwise xor operation.
// Find the maximum number of equal integers you can have in the final array and the minimum number of operations to obtain these many equal integers.


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
    int n, x, count = 0, ans = 0;
    cin >> n >> x;
    map<int, int>mp;
    vi vec;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        vec.pb(no);
        mp[no]++;
    }

    for (auto it : vec)
    {
        if ((it != it ^ x) and ans < mp[it] + mp[it ^ x])
        {
            ans = mp[it] + mp[it ^ x];
            count = mp[it ^ x];
        }

        else if ((it != it ^ x) and ans == mp[it] + mp[it ^ x] and count > mp[it ^ x])
        {
            ans = mp[it] + mp[it ^ x];
            count = mp[it ^ x];
        }

        else if (ans < mp[it])
        {
            ans = mp[it];
            count = 0;
        }
    }
    cout << ans << " " << count << endl;
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
