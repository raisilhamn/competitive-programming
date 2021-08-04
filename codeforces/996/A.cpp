#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long;

/* notes
dp, greedy 

*/

using namespace std;

int main()
{
    fastio;
    // int n, step(0);
    // cin >> n;
    int n, ans = 0;
    int a[] = {100, 20, 10, 5, 1};
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        ans += n / a[i];
        n = n % a[i];
    }
    cout << ans << endl;
    return 0;

    // if (n % 100 > 0)
    // {
    //     step += ((n - (n % 100)) / 100);
    // }
    // n /= 100;
    // if (n % 20 == 0)
    // {
    //     step += (n - (n % 20)) / 20;
    // }
    // n /= 20;
    // if (n % 10 == 0)
    // {
    //     step += (n - (n % 10)) / 10;
    // }
    // n/=10;
    // if (n % 5 == 0)
    // {
    //     step += (n - (n % 5)) / 5;
    // }
    // n /= 5;
    // step +=  n;

    cout << ans << endl;

    return 0;
}