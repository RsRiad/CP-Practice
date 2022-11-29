#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,x;
    ll a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int count=0;
        //while(a%b!=0)
        //{
        x=b-(a%b);
        //a=a+1;
        //count++;
        //}
        if(a%b==0) cout<<"0\n";
        else cout<<x<<"\n";
    }

    return 0;
}
