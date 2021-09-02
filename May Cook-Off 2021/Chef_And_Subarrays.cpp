// Chef is playing a game where he has an array AA of NN integers, and an integer KK. He looks at every subarray of length KK, and writes its sum on a piece of paper. If a number appears as the sum of multiple subarrays of length KK, then he only writes down that number once.

// Chef is lazy and doesn't like to write numbers. You, being a friend of Chef, want to modify the array such that Chef will only write one number on his paper. In one modification you can choose any index ii and replace AiAi with any integer.

// You need to find the minimum number of modifications required.


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

void solve(vi vec, int k)
{
    // if (vec.size() == k)cout << 0 << endl;

    map<int, int>mp;
    int ans = 0;

    for (int i = 0; i < k; i++)
    {
        int count = 1;
        mp[vec[i]]++;
        int j = i + k;
        while (j < vec.size())
        {
            mp[vec[j]]++;
            count++;
            j += k;
        }
        int ma = 0;
        map<int, int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            ma = max(ma, it->second);
        }
        mp.clear();
        ans += (count - ma);
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
        int n, k, maxi = 0;
        cin >> n >> k;
        // map<ll , int>mp;
        vi vec;
        forT(n)
        {
            ll num;
            cin >> num;
            vec.pb(num);
            // mp[num]++;
            // maxi = max(maxi, mp[num]);

        }
        solve(vec, k);
    }
}




// coded with the ❤️ Avnoor
