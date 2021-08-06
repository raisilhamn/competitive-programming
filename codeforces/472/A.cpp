#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes


*/

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 4 << " 4";
    }
    else
    {
        cout << n - 9 << " 9";
    }
    return 0;
}