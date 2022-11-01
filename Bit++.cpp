#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="X++")x++;
        if(s=="++X")++x;
        if(s=="X--")x--;
        if(s=="--X")--x;

    }
    cout<<x;
    return 0;
}
