// Alice and Bob have got an integer NN. They decide to play a game. Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on. The game continues until NN becomes 00. The player who is unable to make a move loses.

// During each turn a player can make one of the following moves:

// Choose an integer XX such that XX can be expressed as 2Y2Y, Y≥1Y≥1. The chosen XX must also be a factor of NN. After choosing an integer XX which satisfies the mentioned criteria, the player will divide NN by XX.

// If Move 11 is not possible , the player will subtract 11 from NN.

// Predict the winner of the game if the game is played optimally by both the players

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

int change(char ch)
{
    return ch - '0';
}

bool check (ll n)
{
    if (n != 0 and (n & (n - 1)) == 0)return true;
    else return false;
}

void solve()
{
    ll n;
    cin >> n;

    map<ll, ll>mp;

    if (n == 2) {
        cout << "Bob" << endl;
        return;
    }

    if (n == 1)
    {   cout << "Alice" << endl;
        return;
    }

    if (n % 2 == 0)
    {
        if (check(n + 2))cout << "Bob" << endl;
        else cout << "Alice" << endl;
        return;
    }

    if (n % 2 != 0)
    {
        if (check(n + 1))cout << "Alice" << endl;
        else cout << "Bob" << endl;
        return ;

    }
    return ;
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
