// Given an array of integers. Write a program to find
// the K-th largest sum of contiguous subarray within the array of
// numbers which has negative and positive numbers.



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


void solve(vi vec, int k, int maxi)
{
    vi temp;
    int ans = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == maxi)
            temp.pb(i + 1);
    }

    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] >= k)
            ans += vec.size() + 1 - temp[i];
        ans += temp.size() ;

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
        int n, k, maxi = -1;
        cin >> n >> k;
        vi vec;
        forT(n)
        {
            int num;
            cin >> num;
            vec.pb(num);
            maxi = max(maxi, vec[i]);
        }

        solve(vec, k, maxi);
    }
}




// coded with the ❤️ Avnoor
