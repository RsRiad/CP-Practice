#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[500];
    int n, p, q;
    cin >> n >> p;
    int count = 0;

    for(int i = 0 ; i < p ; i++) cin >> arr[i];
    cin >> q;
    for(int i = p ; i < p + q ; i++) cin >> arr[i];
    sort(arr, arr+(p+q));

    for(int i = 0 ; i < p+q ; i++)
        if(arr[i] != arr[i+1])
            count++;

    if(n == count) cout << "I become the guy.";
    else  cout << "Oh, my keyboard!";


    return 0;
}
