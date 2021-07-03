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
	ll n,m,k;
	cin>>n>>m>>k;
	ll arr[n+1][m+1];
	ll dp_sum[n+1][m+1];
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			if(i==0 || j==0) 
			 {
				dp_sum[i][j] = 0;
			 } 
			else
			{
				cin>>arr[i][j];
				dp_sum[i][j] = dp_sum[i-1][j]+dp_sum[i][j-1]-dp_sum[i-1][j-1]+arr[i][j];
			}
		}
	}
		
	ll ans = 0;
	for(ll len = 1; len<=n;len++)
	{
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				if(i+len-1 > n || j+len-1 > m) continue;
				ll sum = dp_sum[i+len-1][j+len-1] - dp_sum[i+len-1][j-1] - dp_sum[i-1][j+len-1] + dp_sum[i-1][j-1];
				if(sum >= k*len*len) ans++;
			}
				// get the sum of this sqaure
		}
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
