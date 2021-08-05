#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
You are given the array a consisting of n positive (greater than zero) integers.
In one move, you can choose two indices i and j (i≠j)
such that the absolute difference between ai and aj is no more than one (|ai−aj|≤1)
and remove the smallest of these two elements
If two elements are equal, you can remove any of them (but exactly one).
Your task is to find if it is possible to obtain the array consisting of 
only one element using several (possibly, zero) such moves or not.
You have to answer t independent test cases.

For each test case, print the answer: "YES" if it is possible to obtain the array consisting of only one element using several (possibly, zero) 
moves described in the problem statement, or "NO" otherwise.
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int n, c(0);
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < n; ++i)
        {
            ok &= (a[i] - a[i - 1] <= 1);
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}