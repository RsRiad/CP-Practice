#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m,a;
    ll x,y,sum;
    cin >>n>>m>>a;
    x= n/a;
    y= m/a;
    if(n % a != 0) x = x + 1;
    if(m % a != 0) y = y + 1;
    sum = x*y;
    cout<<sum;

    return 0;
}

