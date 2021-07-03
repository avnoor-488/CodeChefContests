#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int am,bm,cm,th,a,b,c;
        cin>>am>>bm>>cm>>th>>a>>b>>c;
        if(a>=am && b>=bm && c>=cm && a+b+c>=th)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
