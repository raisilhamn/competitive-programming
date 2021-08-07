#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
You are given an array a[0…n−1] of length n
 which consists of non-negative integers.
 Note that array indices start from zero.
An array is called good if the parity of each index 
    matches the parity of the element at that index. 

i mod 2 = a[i] mod 2 

In one move, you can take any two elements 
    of the array and swap them (these elements are not necessarily adjacent).

Find the minimum number of moves in which you can make the array a good, or say that this is not possible.

output : the minimum number of moves to make the given array a good, or -1 if this is not possible.
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int n, odd(0), even(0);
       cin >> n;
       vector<int> arr(n);
       for (auto &it : arr){
           cin >> it;
       }
       for (size_t i = 0; i < n; i++)
       {
           if (arr[i] % 2 != i % 2)
           {
               if (i & 1)
                   odd++;
               else
                   even++;
            //    if (i % 2 == 0)
            //    {
            //        a++;
            //    }
            //    else
            //    {
            //        b++;
            //    }
           }
       }
       if (odd != even)
       {
           cout << -1 << endl;
       }
       else
       {
           cout << even << endl;
       }
    }
    return 0;
}