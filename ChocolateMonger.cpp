#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            int no;
            cin>>no;
            v.push_back(no);
        }
        sort(v.begin(),v.end());
        int maxAns=0;
        if(n<x)
        {
            cout<<0<<endl;
            break;
        }
        else 
        {
            
            for(int i=0;i<v.size();i++)
            {
                if(v[i]!=v[i+1])
                {
                    maxAns++;                    
                }
                else 
                {
                    if(x>0)
                    x--;
                    continue; 
                }
            }
        }
        if(x==0)cout<<maxAns<<endl;
        else 
        {
            cout<<maxAns-x<<endl;
        }
    }
}
