#include <bits/stdc++.h>
using namespace std;
int t,x,arr[107];
int main()
{
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        cin >> x;
        arr[x] = i;
    }
    for (int i=1; i<=t; i++) cout<<arr[i]<< " ";
    return 0;
}
