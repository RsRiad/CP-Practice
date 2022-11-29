#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++) cout<<abs(a[i]-b[i]);

    return 0;
}
