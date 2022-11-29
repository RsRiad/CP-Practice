#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        string s,s1;
        int x;
        s1="";
        cin>>s;
        for(int i=0; i<s.size(); i++) s1+="Yes";
        if((x=s1.find(s,0))==string::npos) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
