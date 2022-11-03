#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
    int a,b,t,x,i=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=-a+b;
        i+=x;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0];
    return 0;
}
