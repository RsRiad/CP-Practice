#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(auto& c : a) c = tolower(c);
    for(auto& d : b) d = tolower(d);
    cout<<a.compare(b);

    return 0;
}
