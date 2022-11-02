#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    cin>>s;
    int n=s.length();
    for(auto& c : s) c = tolower(c);
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else
        {
            x+='.';
            x+=s[i];
        }
    }
    cout<<x;
    return 0;
}
