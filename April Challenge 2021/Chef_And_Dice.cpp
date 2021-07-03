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


void solve()
{
	ll n;
	cin>>n;
	ll ans=0;
	if(n<=4)
	{
		if(n==1)ans+=20;
		else if(n==2)ans+=36;
		else if(n==3)ans+=51;
		else if(n==4)ans+=60;
	}
	else
	{
		ans+=60;
		ll x=(n-4)/4;
		ll y=n%4;
		ans+=x*44;
		if(y==1)ans+=16;
		else if(y==2)ans+=28;
		else if(y==3)ans+=39;
	}
		
	cout<<ans<<endl;
}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif


    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
// coded with the ❤️ Avnoor;
