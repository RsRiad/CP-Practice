#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s,a="hello";
    cin >>s;
    int x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[x])
        {
            x++;
            count++;
        }
    }
    if(count==5) cout<<"YES";
    else cout<<"NO";
}

