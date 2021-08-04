#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
Vasya even has a favorite coder and 
Vasya pays special attention to him.

he can break either his best or his worst performance record. 
First, it is amazing if during the contest the coder earns strictly more points 
that he earned on each past contest.

Second, it is amazing if during the contest the coder earns strictly less points 
that he earned on each past contest. 
A coder's first contest isn't considered amazing. 
!! input the first line contains the single integer n (1 ≤ n ≤ 1000)
!! output the number of amazing performances
*/

using namespace std;

int main()
{
    fastio;
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}