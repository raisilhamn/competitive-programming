#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
print t answers to the test cases. Each answer must begin with an integer k — the minimum number of summands. 
 Next, k terms must follow, each of which is a round number, and their sum is n.
 
*/

using namespace std;

int main()
{
    fastio;
    int t, n;
    int aa[6];
    cin >> t;
    while (t--)
    {
        int d = 0, rem = 0;
        cin >> n;
        if (n >= 1000)
        {
            rem = n % 1000;
            aa[d++] = n - rem;
            n %= 1000;
        }
        if (n >= 100)
        {
            rem = n % 100;
            aa[d++] = n - rem;
            n %= 100;
        }
        if (n >= 10)
        {
            rem = n % 10;
            aa[d++] = n - rem;
            n %= 10;
        }
        if (n < 10 && n > 0)
        {
            aa[d++] = n;
        }
        vector<int> va;
        for (int i = 0; i < d; i++)
        {
            va.push_back(aa[i]);
        }

        cout << va.size() << endl;
        for (int i = 0; i < va.size(); i++)
        {
            cout << va[i] << " ";
        }
        cout << endl;
    }
    return 0;
}