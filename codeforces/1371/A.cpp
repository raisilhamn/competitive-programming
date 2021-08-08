#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
maximum number of sticks that have the same length.
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    long long n;
    while(t--)
    {
       cin >> n;
       if (n % 2 == 0)
       {
           cout << n / 2 << endl;
       }else
       {
           cout << (n / 2) + 1 << endl;
       }
    
          
    }
    return 0;
}