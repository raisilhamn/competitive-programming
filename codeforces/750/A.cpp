#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
The contest will start at 20:00 and will last four hours, exactly until midnight.
There will be n problems, sorted by difficulty, 
i.e. problem 1 is the easiest and problem n is the hardest. 
Limak knows it will take him 5·i minutes to solve the i-th problem.
He needs k minutes to get there from his house, 
where he will participate in the contest first.
!! How many problems can Limak solve if he wants to make it to the party?

!! The only line of the input contains two integers n and k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240)
n = the number of the problems in the contest and 
k = the number of minutes Limak needs to get to the party from his house.

!! output 
Print one integer, denoting the maximum possible number of 
problems Limak can solve so that he could get to the party at midnight or earlier.
*/

using namespace std;

int main()
{
    fastio;
    int n, k, time, total(0), solve(0);
    cin >> n >> k;
    for (size_t i = 1; i <= n; i++)
    {
        total += 5 * i;
        if (total + k <= 240 )
        {
            solve++;
        }
        else
        {
            break;
        }
    }

    cout << solve << endl;

    return 0;
}