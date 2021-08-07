#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
Each team must have at least one athlete, and each athlete must be exactly in one team.
the athlete number i has the strength si.

You want the strongest athlete from the first team to differ as little
     as possible from the weakest athlete from the second team. 
berbeda sesedikit mungkin dari yang terlemah

*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int at;
       cin >> at;
       vector<int> all(at);
       for (auto &it : all)
           cin >> it;
       sort(all.begin(), all.end()); 
       int result = all[at - 1] - all[0];
       for (int i = 0; i < at; i++)
       {
           for (int j = i + 1; j < at; j++)
           {
               result = min(result, all[j] - all[i]);
           }
       }
       cout << result << endl;
    }
    return 0;
}