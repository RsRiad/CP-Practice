/*
Given two integers: n and m and n is divisible by 2m, you have to first write down the first n natural numbers in the following form:

At first take first m integers and make their sign negative
Then take next m integers and make their sign positive
The next m integers should have negative signs and continue this procedure until all the n integers have been assigned a sign.
For example, let n be 12 and m be 3. Then we have -1 - 2 - 3 + 4 + 5 + 6 - 7 - 8 - 9 + 10 + 11 + 12. If n = 4 and m = 1, then we have -1 +2 -3 + 4.

Now your task is to find the summation of the numbers considering their signs.

Input
Input starts with an integer T (≤ 10000), denoting the number of test cases.Each case starts with a line containing two integers: n and m (2 ≤ n ≤ 109, 1 ≤ m). And you can assume that n is divisible by 2*m.

Output
For each case, print the case number and the summation.

Sample
Inputcopy	Outputcopy
2
12 3
4 1
Case 1: 18
Case 2: 2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin >> t;
    while(t--)
    {
        c++;
        long long int n,m;
        cin >> n >> m;
        cout << "Case " << c << ": " << (n*m)/2 <<"\n";
    }
    return 0;
}
