#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
Bob came up with the secret string a consisting of lowercase English letters.
he string a has a length of 2 or more characters.
Then, from string a he builds a new string b and offers Alice the string b so that she can guess the string a.
Bob builds b from a as follows: he writes all the substrings of length 2 of the string a in the order from left to right, 
and then joins them in the same order into the string b.
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        string b;
        cin >> b;

        string a = b.substr(0, 2);

        for (int i = 3; i < b.size(); i += 2)
        {
            a += b[i];
        }

        cout << a << endl;
    }

}