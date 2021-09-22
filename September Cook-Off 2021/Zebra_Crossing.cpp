// There's a zebra crossing appearing in the middle of nowhere with NN blocks in it. The colors of the zebra crossing is represented by a binary string SS, 
// where SiSi is 1 if the ii-th block from the left is white, and 0 if the block is black.
// Chef really wants to play with the zebra crossing. Although the given zebra crossing might not have alternate black and white blocks,
// Chef wants to follow the alternating white-black color pattern while crossing it.
// Initially, Chef stands at block 11. Chef has to jump exactly KK times, and in each jump he has to move forward and jump to a different color than that previously occupied by Chef.
// More formally, suppose that Chef is currently at block ii and wants to jump to block jj then following conditions should hold:
// i<ji<j
// Si≠SjSi≠Sj
// Output the farthest block Chef can reach with exactly KK jumps. If Chef cannot jump exactly KK times, output -1


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

int change(char ch)
{
    return ch - '0';
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int curr = change(s[0]);
    vector<pair<int, int>> p;
    p.pb({curr, 0});

    int i;
    for (i = 0; i < s.size(); i++) {
        if (change(s[i]) == curr && change(s[i - 1]) != curr) {
            p.pb({change(s[i - 1]), i - 1});
            curr = change(s[i - 1]);
        }
    }
    if (change(s[i - 1]) != p[p.size() - 1].fi) {
        p.pb({change(s[i - 1]), i - 1});
    }
    if (((p.size() - 1) < k)) {
        cout << "-1" << endl;
        return;
    }
    int maxi, currStep = p[0].fi;
    for (int i = 1; i <= k; i++) {
        if (i == k) {
            if (p[p.size() - 1].fi != currStep) {
                maxi = p[p.size() - 1].sec + 1;
            }
            else
                maxi = p[p.size() - 2].sec + 1;
        }
        currStep = p[i].fi;
    }
    cout << maxi << endl;
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
