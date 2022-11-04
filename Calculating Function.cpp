#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,sum;
    cin>>n;
    if(n % 2 == 0) sum = n / 2;
    else sum = ((n + 1) / 2) * (-1);
    cout << sum;
    return 0;
}
