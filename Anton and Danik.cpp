#include<bits/stdc++.h>
using namespace std;
int main()
{
    int C=0,c=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n;i++)
    {
        if(s[i]=='A') C++;
        else if(s[i]=='D') c++;
    }
    if(C>c) cout<<"Anton";
    else if(c>C) cout<<"Danik";
    else if(c==C) cout<<"Friendship";
    return 0;
}

