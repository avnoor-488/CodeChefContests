#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int i=0;i<n;i++)
#define mod 1000000007


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

ll solve(ll a, ll b){
    if(b==0)return 1;
    if(b==1)return a;
    
    if(b%2==0){
        ll ans = getPower(a,b/2);
        return (ans * ans) % mod;
    }
    else {
        ll ans = getPower(a,(b-1)/2);
        return ((a*ans)%mod*ans)%mod;
    }
}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >>t ;
    while(t--){
        ll a,b,temp;
        cin >> a >> b;
        temp = solve(2,a)-1;
        cout << solve(temp,b) << endl;
    }


}


// coded with the ❤️ Avnoor;
