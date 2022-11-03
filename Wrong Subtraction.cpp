#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k;
    cin>>x>>k;
    for(int i=0;i<k;i++)
    {
        if(x%10!=0) x-=1;
        else if(x%10==0) x/=10;
    }
    cout<<x;
    return 0;
}
