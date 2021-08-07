#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
You are given two arrays a and b both consisting of n positive (greater than zero) integers. 
You are also given an integer k.

In one move, you can choose two indices i and j (1≤i,j≤n) and 
    swap ai and bj (i.e. ai becomes bj and vice versa).
Note that i and j can be equal or different 
    (in particular, swap a2 with b2 or swap a3 and b9 both are acceptable moves).

Your task is to find the maximum possible sum you can obtain 
    in the array a if you can do no more than (i.e. at most) k such moves (swaps).

greedy
sorting
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k; // The first line of the test case contains two integers n and k
        //  n the number of elements in a and b
        // k the maximum number of moves you can do.
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        vector<int> b(n);
        for (auto &it : b)
            cin >> it;
        sort(a.begin(), a.end()); // maximum ketika salah satunya dibalik
        sort(b.rbegin(), b.rend()); // selisihnya maksimum
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i < k) // k the maximum number of moves you can do.
                ans += max(a[i], b[i]);
            else
                ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}


