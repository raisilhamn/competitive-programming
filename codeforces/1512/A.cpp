#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
You are given an array a consisting of n (n≥3) positive integers. 
It is known that in this array, all the numbers except one are the same
ex [4,11,4,4] 

*/

using namespace std;


int main()
{
    fastio;
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        vector<int> v(n); // vektor 1 
        for (int &e : v)
        {
            cin >> e;
        }

        vector<int> a = v; // vektor 2 
        sort(a.begin(), a.end()); //yang berbeda akan ada di posisi paling depan
        // atau paling belakang
        // yang a disort
        for (int i = 0; i < n; i++)
        {
            if (v[i] != a[1])
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}