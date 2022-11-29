#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string a,b;
    cin>>a>>b;
    if((a-b)<0) printf("%c\n",'<');
    else if(a-b>0) printf("%c\n",'>');
    else if(a-b==0) printf("%c\n",'=');
    return 0;
}
