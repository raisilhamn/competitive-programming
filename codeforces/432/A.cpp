#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
 According to the ACM ICPC rules, 
 each person can participate in the world championship at most 5 times.
each team must consist of exactly three people
any person cannot be a member of two or more teams. 
What maximum number of teams can the head make if he wants each team to participate 
in the world championship with the same members at least k times?


the first line contains two integers, n and k (1 ≤ n ≤ 2000; 1 ≤ k ≤ 5). 
The next line contains n integers:
where yi shows the number of times the i-th person participated in the ACM ICPC world championship.


*/

using namespace std;

int main()
{
    fastio;
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (v[i] + k <= 5)
            cnt++;

    cout << cnt / 3;
}

