#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/*

   notes

*/

using namespace std;

int main()
{
    fastio;
    string s;
    set<char> l;
    getline(cin, s);

    int i = 0;
    while (s[i])
    {
        if (isalpha(s[i])) // isalpha  : Check if character is alphabetic
            l.insert(s[i]);
        i++;
    }

    cout << l.size() << endl;
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}