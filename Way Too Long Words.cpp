#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int x=(s.size()-2);
        if(s.size()>0 && s.size()<=100)
        {
            if(s.size()<=10)
                cout<<s<<endl;
            else
                cout<<s.at(0)<<(s.size()-2)<<s.at(s.size()-1)<<endl;
        }

    }

    return 0;
}
