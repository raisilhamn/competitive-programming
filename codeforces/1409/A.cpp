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
    int t;
    cin >> t;
    
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << endl;
    }
    return 0;
}