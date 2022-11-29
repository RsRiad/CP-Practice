#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,x,y,sum,n;
    int flag=0;
    cin>>t>>sum;
    int v[t+1];
    for(int i=0; i<t; i++) cin>>v[i];

    for(int i=0; i<t; i++)
    {
        for(int j=i+1; j<t; j++)
        {
            if(v[i]+v[j]==sum)
            {
                x=i+1;
                y=j+1;
                flag=1;
            }
        }
    }
    if(flag==1)
        cout<<x<<" "<<y;
    else cout<<"IMPOSSIBLE";
    return 0;
}

