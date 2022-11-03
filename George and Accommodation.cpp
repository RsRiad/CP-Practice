#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q,count=0;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;
        if((q-p)>1)
            count++;
    }
    cout<<count;
    return 0;
}
