#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    int v[4];
    while(true)
    {
        y+=1;
        v[0]=(y%10);
        v[1]=(y/10%10);
        v[2]=(y/100%10);
        v[3]=(y/1000%10);
        if (v[0]!= v[1] && v[0] != v[2] && v[0] != v[3] && v[1] != v[2] && v[1] != v[3] && v[2]!= v[3])
            break;
    }
    cout<<y;
    return 0;
}

