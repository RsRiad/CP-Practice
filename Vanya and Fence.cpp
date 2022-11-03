#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,k,x=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k<h) x+=1;
        if(k>=h) x+=2;
    }
    cout<<x;
}
