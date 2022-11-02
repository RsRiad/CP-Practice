#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int result=(k*(w*((w+1))/2))-n;
    if(result<=0) cout<<"0";
    else cout<<result;

    return 0;
}
