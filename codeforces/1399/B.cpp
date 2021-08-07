#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
During one move, you can choose some gift 1≤i≤n and do one of the following operations:
    eat exactly one candy from this gift (decrease ai by one); 
    eat exactly one orange from this gift (decrease bi by one); 
    eat exactly one candy and exactly one orange from this gift (decrease both ai and bi by one). 
Of course, you can not eat a candy or orange if it's 
    not present in the gift (so neither ai nor bi can become less than zero).

As said above, all gifts should be equal. 
    and ai equals bi is not necessary

Your task is to find the minimum number of moves required to equalize all the given gifts.


greedy
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int gift, size;
        cin >> size;
        vector<int> a(size);
        for (auto &it : a)
            cin >> it;
        vector<int> b(size);
        for (auto &it : b)
            cin >> it;
        int mna = *min_element(a.begin(), a.end());
        int mnb = *min_element(b.begin(), b.end());
        long long ans = 0;
        for (int i = 0; i < size; ++i)
        {
            ans += max(a[i] - mna, b[i] - mnb);
        }
        cout << ans << endl;
    }
    return 0;
}