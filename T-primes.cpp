/*
We know that prime numbers are positive integers that have exactly
 two distinct positive divisors. Similarly, we'll call a positive 
 integer t Т-prime, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them 
determine whether it is Т-prime or not.

Input
The first line contains a single positive integer, n 
(1≤n≤10^5), showing how many numbers 
are in the array. The next line contains n space-separated integers 
xi (1≤xi≤10^12).

Please, do not use the %lld specifier to read or write 64-bit integers
 in С++. It is advised to use the cin, cout streams or the %I64d specifier.

Output
Print n lines: the i-th line should contain "YES" (without the quotes),
 if number xi is Т-prime, and "NO" (without the quotes), if it isn't.

Sample 1
Inputcopy   Outputcopy
3
4 5 6
YES
NO
NO
Note
The given test has three numbers. The first number 4 has exactly three
 divisors — 1, 2 and 4, thus the answer for this number is "YES". 
 The second number 5 has two divisors (1 and 5), and the third 
 number 6 has four divisors (1, 2, 3, 6), hence the answer for them is "NO".
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 1e6
vector<int> seive(N,1);
int main()
{
    seive[0]=seive[1]=0;

    for(ll i=2; i*i<=N; i++)
        if(seive[i])
            for(ll j=i*i; j<=N; j+=i)
                seive[j]=0;

    ll x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        ll xx=sqrt(x);
        if(x==0)
            cout<<"NO"<<endl;
        else if(xx*xx==x && seive[xx]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //Extra 
    //Printing T primes     
    for(int i=0;i<=10000;i++){
        int x=sqrt(i);
        if(x*x==i && seive[x]==1)
        cout<<i <<"\n";

    }
        
    return 0;
}
