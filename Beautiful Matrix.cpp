#include<bits/stdc++.h>
using namespace std;
int mat[5][5];
int main()
{
    int x,y;
    for(int i=1; i<=5; i++)
        for(int j=1; j<=5; j++)
            cin>>mat[i][j];


    for(int i=1; i<=5; i++)
        for(int j=1; j<=5; j++)
            if(mat[i][j]==1)
            {
                x=abs(3-i);
                y=abs(3-j);
            }
    cout<<x+y;
    return 0;
}

