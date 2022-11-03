#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1) c++;
    }
    if(c==0) cout<<"EASY";
    else cout<<"HARD";
    return 0;
}

