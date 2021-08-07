#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
Given a positive integer n represent it as a sum of maximum possible number of prime numbers. 
One can prove that such representation exists for any integer greater than 1.
*/

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    if (n & 1){
        cout << ((n - 1) / 2)  << endl;
        for (size_t i = 1; i <= ((n - 1) / 2) - 1; i++)
        {
            cout << "2"
                 << " ";
        }
        cout << "3" << endl;
    }
    else{
        cout << n / 2 << endl;
        for (size_t i = 1; i <= n / 2; i++)
        {
            cout << "2"
                 << " ";
        }
    }

        
    return 0;
}