#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0) cout<<n/2<<"\n";
        else cout<<(n/2)+1<<"\n";
    }
    return 0;
}
