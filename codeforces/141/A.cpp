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
    string a, b, c, s;
    cin >> a >> b >> c;

    s = a + b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if (s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}