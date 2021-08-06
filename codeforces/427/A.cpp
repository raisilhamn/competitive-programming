#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
One member of the police force can investigate only one crime during his/her lifetime.
If there is no police officer free (isn't busy with crime) 
    during the occurrence of a crime, it will go untreated.
If the integer is -1 then it means a crime has occurred.
otherwise, the integer will be positive, the number of officers recruited together at that time.

No more than 10 officers will be recruited at a time.
*/

using namespace std;

int main()
{
    fastio;
    int n, tot = 0, ans = 0;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp == -1)
        {
            if (!tot)
                ans++;
            else
                tot--;
        }
        else
            tot += temp;
    }
    cout << ans << endl;
    return 0;
}