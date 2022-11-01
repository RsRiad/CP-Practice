#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        bool arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]+arr[1]+arr[2]>=2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}

