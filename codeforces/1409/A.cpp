#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
We can add or subtract 10 until the difference between a and b becomes less than 10. 
And if it is not 0 after all such moves, we need one additional move.
editorial : https://codeforces.com/blog/entry/82284

*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << endl;
    }
    return 0;
}