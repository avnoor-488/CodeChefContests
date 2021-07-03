#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n];
        for(int i = 0;i<n;i++)
            cin>>a[i];
            
        int arr[31] = {0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<31;j++)
            {
                ll x = 1<<j;
                if(a[i]&x)
                    arr[j] += 1;
            }
        }
        
        ll c = 0;
        for(int i=0;i<31;i++)
        {
            ll x = 1<<i;
            if(arr[i])
                c += x;
        }
        cout<<c<<endl;
        
        for(int m=0;m<q;m++)
        {
            ll t1,t2;
            cin>>t1>>t2;
            for(int i=0;i<31;i++)
            {
                ll x=1<<i;
                if(a[t1-1]&x){
                    arr[i] -= 1;
            }
        }
        for(int i=0;i<31;i++)
        {
            ll x = 1<<i;
            if(t2&x)
                arr[i] += 1;
        }
        a[t1-1] = t2;
        ll c = 0;
        for(int i=0;i<31;i++)
        {
            ll x = 1<<i;
            if(arr[i]>0)
                c += x;
        }
        cout<<c<<endl;
        }
    }
}
