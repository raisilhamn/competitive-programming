#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes

greedy
math

*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
        string num;
        cin >> num;
        int dig = num[0] - '0' - 1;
        int len = num.size();
        cout << dig * 10 + len * (len + 1) / 2 << endl;
    }
    return 0;
}