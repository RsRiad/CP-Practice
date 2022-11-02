#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,count=0;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(s[i]==s[j] && (j-i)==1)
                count++;
    cout<<count;

}

