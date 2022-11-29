#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if((x-y)>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
