#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
Totally in Berland there are n citizens, 
the welfare of each of them is estimated as the integer in ai burles
You are the royal treasurer, 
which needs to count the minimum charges of the kingdom on the king's present.

The first line contains the integer n (1 ≤ n ≤ 100) — the number of citizens in the kingdom.
The second line contains n integers a1, a2, ..., an, where ai (0 ≤ ai ≤ 106) — 
    the welfare of the i-th citizen.
    
output : In the only line print the integer S — the minimum number of burles which are had to spend.

*/

using namespace std;

int main()
{
    fastio;
    int t, max, add(0);
    cin >> t;
    vector<int> citizen;

    while (t--)
    {
        int a;
        cin >> a;
        citizen.pb(a);
    }
    sort(citizen.begin(), citizen.end());
    max = *max_element(citizen.begin(), citizen.end());
    for (size_t i = 0; i < citizen.size(); i++)
    {
        if (citizen.at(i) != max)
        {
            add += max - citizen.at(i);
        }
        
    }
    cout << add << endl;
    
    

    return 0;
}