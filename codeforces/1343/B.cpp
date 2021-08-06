#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
/* notes
if there are multiple answers, you can print any. 
It is not guaranteed that the answer exists.


*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        n /= 2;
        if (n & 1)
        {
            cout << "NO" << endl;
            continue; // end this loop
        }
        // if not even 
        cout << "YES" << endl;
        for (int i = 1; i <= n; ++i) // Pre-increment
        {
            cout << i * 2 << " ";
        }
        for (int i = 1; i < n; ++i) // Pre-increment
        {
            cout << i * 2 - 1 << " ";
        }
        cout << 3 * n - 1 << endl;
    }

    return 0;
}