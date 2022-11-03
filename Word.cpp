#include<bits/stdc++.h>
using namespace std;
int main()
{
    int C=0,c=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]>64 && s[i]<91) C++;
        else if(s[i]>96 && s[i]<123) c++;
    }
    if(C>c) for(auto& x: s) x=toupper(x);
    else if(c>=C) for(auto& x: s) x=tolower(x);

    cout<<s;
    return 0;
}
