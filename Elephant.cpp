#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,rem,ans;
    cin>>x;
    rem=x/5;
    if(x%5<5 && x%5!=0)
        cout<<rem+1;

    else cout<<rem;
    return 0;
}
