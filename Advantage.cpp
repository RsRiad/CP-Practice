#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n;
        cin>>n;
        ll arr[n];
        ll arr1[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        sort(arr1,arr1+n);
        int z=arr1[n-2];
        int z1=arr1[n-1];
        for(int i=0; i<n; i++)
        {
            if(arr[i]==z1) cout<<(z1-z)<<" ";
            else cout<<arr[i]-z1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

