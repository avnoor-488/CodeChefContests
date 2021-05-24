#include <bits/stdc++.h>
using namespace std;


#define mp make_pair
#define pb push_back
#define fi first
// #define forT(t) for(int i=0;i<t;i++)
// #define forN(n) for(int a=0;a<n;a++)
#define MOD 1000000007
// #define num 4e6 + 5


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<ll> vi;


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

ll gcd (ll a, ll b)
{
	if (b == 0)
		return a;

	return gcd(b, a % b);
}


const long long  N = 4e6 + 5;
int cal[N], ans[N];


int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	cin.tie(0);


	// long long  cal[N], ans[N];
	for (int i = 0; i < N; i++)
	{
		cal[i] = i;
		ans[i] = 0;

	}

	for (int p = 2; p < N; p++)
	{
		if (cal[p] == p)
		{
			cal[p] = p - 1;
			for (int j = 2 * p; j < N; j += p)
			{
				cal[j] = (cal[j] / p) * (p - 1);
			}
		}
	}

	for (int i = 1; i < N; i++)
	{
		ans[i] += i - 1;
		for (int j = 2 * i; j < N; j += i)
		{
			ans[j] += i * ((1 + cal[j / i]) / 2);
		}
	}

	int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;
		cout << ans[4 * k + 1] % MOD << endl;
	}
	return 0;
}
