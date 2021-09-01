// Chef is very adventurous, so he asked Bob to give him a task.

// Bob gave him a sequence of blocks with heights A1,A2,…,ANA1,A2,…,AN. Chef is at the first block and he has to reach the NN-th block using the minimum number of moves to complete the task.

// In one move, he can jump from the ii-th block to the jj-th block only if the following conditions are satisfied:

// i<ji<j
// Ai≥AjAi≥Aj
// for all kk (i<k<ji<k<j), Ak≤AjAk≤Aj
// You have to find the minimum number of moves Chef needs to perform to reach the last block, or determine that it is impossible.



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


void solve(vi vec)
{
    int ans = 0;
    int start = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > start) {
            cout << -1 << endl;
            return ;
        }
    }
  
    stack<int>s;
    for (int i = 1; i < vec.size(); i++) {
        while (s.size() && s.top() <= vec[i]) {
            s.pop();
        }
        s.push(vec[i]);
    }

    while (!s.empty()) {
        ans++;
        s.pop();
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
        int n;
        cin >> n ;
        vi vec;
        forT(n)
        {
            int num;
            cin >> num;
            vec.pb(num);
        }

        solve(vec);
    }
}




// coded with the ❤️ Avnoor
