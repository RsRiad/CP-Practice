#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count=0;
    string s,S;
    cin>>s>>S;
    int x=s.size(); int X=S.size();
    for(i=0,j=X-1;i<x,j>=0;i++,j--)
    {
        if(s[i]==S[j])
            count++;
    }
    if(count==x) cout<<"YES";
    else cout<<"NO";

    return 0;
}

