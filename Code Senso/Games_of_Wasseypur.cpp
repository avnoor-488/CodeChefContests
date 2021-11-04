// Everything was going well in Wasseypur until Ramadhir Singh found out that Sahid Khan plans to kill him someday and takeover his mine. To protect himself, he decided to take preemptive measures and kill Sahid Khan first.
// However, Sahid Khan also learnt of Ramadhir Singh's plan to kill him,and soon Wasseypur was all set for bloodshed - but Chef intervened! Instead of resorting to violence, he convinced them to settle things by playing a game called the Game of Wasseypur.
// The game is as follows: There is a string SS of length NN consisting of only 0′s0′s and 1′s1′s. Players take turns moving - on his turn, a player chooses some blockblock of SS and erases it. 
// The remaining parts of SS are then concatenated together (without changing the order), and the other player then makes a move on this modified string.
// A blockblock in the string is defined as a maximal non-empty substring consisting of the same character. For example, if S=0001110110011S=0001110110011, there are 66 blocks: in order from left to right, 000,111,0,11,00,11000,111,0,11,00,11.
// The player who is unable to make a move at the end loses the game and has to leave Wasseypur. Assuming that both players play optimally and Sahid Khan starts, find the winner of the game.

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
    // if (x.fi != y.fi)
    //     return x.fi < y.fi;
    // else
    return x.sec < y.sec;
}



void solve()
{

    ll n, count = 0;
    cin >> n;
    string str;
    cin >> str;

    forT(str.size() - 1)
    {
        if (str[i] != str[i + 1])count++;
    }
    count++;

    if (count % 3 == 0 )cout << "SAHID" << endl;
    else if ( count % 3 == 1)cout << "SAHID" << endl;
    else cout << "RAMADHIR" << endl;
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
    return 0;
}




// coded with the ❤️ Avnoor
