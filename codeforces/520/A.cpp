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
    // string str;
    // set<char> l;
    // int n;
    // cin >> n;
    // cin >> str;
    // for (size_t i = 0; i < n; i++)
    // {
    //     if (islower(str[i]))
    //     {
    //         str[i] = tolower(str[i]);
    //     }
    //     l.insert(str[i]);
    // }
    // if (l.size() >= 26)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    set<char> val;
    int n;
    cin >> n;
    while (n--)
    {
        char c;
        cin >> c;
        val.insert(tolower(c));
    }
    if (val.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    val.clear();
    return 0;
}