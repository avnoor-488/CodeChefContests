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
	string s;
    cin >> s;
    int n = s.size();
    int last = -1;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            for(int j=last+1;j<=i;j++){
                a0[j] = i;
            }
            last = i;
        }
    }
    for(int i=last+1;i<n;i++){
        a0[i] = n;
    }
    if(a0[0] == n){
        cout << "0" << endl;
        return;
    }

    last = -1;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            for(int j = last+1;j<=i;j++){
                a1[j] = i;
            }
            last = i;
        }
    }
    for(int i=last+1;i<n;i++){
        a1[i] = n;
    }

    dp0[n] = dp0[n+1] = 0;
    dp1[n] = dp1[n+1] = 0;

    for(int i=n-1;i>=0;i--){
        dp0[i] = dp0[i+1];
        if(s[i] == '0' && a1[i] < n){
            dp0[i] = max(dp0[i],dp0[a1[i]+1]+1);
        }
        if(s[i] == '1' && a0[i] < n){
            dp0[i] = max(dp0[i],dp0[a0[i]+1]+1);
        }

        dp1[i] = dp1[i+1];
        if(a1[i] < n){
            dp1[i] = max(dp1[i],dp0[a1[i]+1]+1);
        }
    }

    int len = dp1[0]+1;
    int cur = a1[0]+1;

    string ans = "1";

    for(int i=1;i<len;i++){
        if(cur >= n){
            ans.pb('0');
            continue;
        }
        if(a0[cur] >= n){
            ans.pb('0');
            cur = a0[cur]+1;
            continue;
        }
        if(dp0[a0[cur]+1] < len-i-1){
            ans.pb('0');
            cur = a0[cur]+1;
        }
        else{
            ans.pb('1');
            cur = a1[cur]+1;
        }
    }
    cout << ans << endl;  
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
        
    }
}
// coded with the ❤️ Avnoor;
