#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
you are given three integers x,y and n. Your task is to find the maximum integer k such that 0≤k≤n 
kmodx=y

In other words, with given x,y and n 
    you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.

For each test case, print the answer — maximum non-negative integer k such that 0≤k≤n and kmodx=y.

math
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        //    0 ≤ k ≤ n
        //    k mod x = y
        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << endl; // n−nmodx+y
        }
        else
        {
            
            cout << n - n % x - (x - y) << endl; // n−nmodx−(x−y)
        }
    }
    return 0;
}