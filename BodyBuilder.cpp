#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        vector<ll>a,b;
        for(int i=0;i<n;i++)
        {
            ll no;
            cin>>no;
            a.push_back(no);
        }
        for(int i=0;i<n;i++)
        {
            ll no;
            cin>>no;
            b.push_back(no);
        }
        ll maxi=b[0],tempu=b[0],x=0;

        for(int i=1;i<n;i++)
        {
            tempu=max(x,tempu - (r * (a[i]-a[i-1])));
            tempu+=b[i];
            maxi=max(tempu,maxi);
        }
        cout<<maxi<<endl;
    }
}
