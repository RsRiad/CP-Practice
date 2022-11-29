#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0;
    cin>>t;
    int v[t];
    for(int i=0; i<t; i++)
        cin>>v[i];

    for(int i=0; i<t; i++)
        if(v[i]!=v[i+1])
            count++;

    cout<<count;

    return 0;
}

