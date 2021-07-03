#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int i=0;i<n;i++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long ll;



void fastscan( ll &number)
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





int main() {


// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    forT(t)
    {
        int numX = 0, numO = 0, num = 0;



        char ch[3][3];
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> ch[j][k];
                if (ch[j][k] == 'X')numX++;
                else if (ch[j][k] == 'O')numO++;
                else if (ch[j][k] == '_')num++;
            }
        }
        // cout << numO << " "  << numX << " " << num << endl;
        int countX = 0, countO = 0;

        if (ch[0][0] == 'X' and ch[0][1] == 'X' and ch[0][2] == 'X')countX = 1;
        if (ch[1][0] == 'X' and ch[1][1] == 'X' and ch[1][2] == 'X')countX = 1;
        if (ch[2][0] == 'X' and ch[2][1] == 'X' and ch[2][2] == 'X')countX = 1;
        if (ch[0][0] == 'X' and ch[1][0] == 'X' and ch[2][0] == 'X')countX = 1;
        if (ch[0][1] == 'X' and ch[1][1] == 'X' and ch[2][1] == 'X')countX = 1;
        if (ch[0][2] == 'X' and ch[1][2] == 'X' and ch[2][2] == 'X')countX = 1;
        if (ch[0][0] == 'X' and ch[1][1] == 'X' and ch[2][2] == 'X')countX = 1;
        if (ch[0][2] == 'X' and ch[1][1] == 'X' and ch[2][0] == 'X')countX = 1;


        if (ch[0][0] == 'O' and ch[0][1] == 'O' and ch[0][2] == 'O')countO = 1;
        if (ch[1][0] == 'O' and ch[1][1] == 'O' and ch[1][2] == 'O')countO = 1;
        if (ch[2][0] == 'O' and ch[2][1] == 'O' and ch[2][2] == 'O')countO = 1;
        if (ch[0][0] == 'O' and ch[1][0] == 'O' and ch[2][0] == 'O')countO = 1;
        if (ch[0][1] == 'O' and ch[1][1] == 'O' and ch[2][1] == 'O')countO = 1;
        if (ch[0][2] == 'O' and ch[1][2] == 'O' and ch[2][2] == 'O')countO = 1;
        if (ch[0][0] == 'O' and ch[1][1] == 'O' and ch[2][2] == 'O')countO = 1;
        if (ch[0][2] == 'O' and ch[1][1] == 'O' and ch[2][0] == 'O')countO = 1;

        if ((countX == 1 and countO == 1) or (numX - numO < 0) or (numX - numO > 1))cout << 3 << endl;
        else if (numX == 0 and numO == 0 and num == 9)cout << 2 << endl;
        else if (countX == 1 and countO == 0 and numO < numX)cout << 1 << endl;
        else if (countX == 0 and countO == 1 and numX == numO)cout << 1 << endl;
        else if (countX == 0 and countO == 0 and num == 0)cout << 1 << endl;
        else if (countX == 0 and countO == 0 and num > 0)cout << 2 << endl;
        else cout << 3 << endl;
    }
}


// coded with the ❤️ Avnoor;
