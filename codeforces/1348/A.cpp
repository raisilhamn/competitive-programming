#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
He wants to split the coins into two piles such that each pile has exactly n/2 coins 
and the difference of weights between the two piles is minimized. 

Help Phoenix minimize abs(a-b)

https://codeforces.com/blog/entry/76555

math

*/

using namespace std;

// void solve()
// {
//     int N;
//     cin >> N;

//     //note: 1<<X means 2^X
//     //we put largest coin in first pile
//     int sum1 = (1 << N), sum2 = 0;

//     //we put n/2-1 smallest coins in first pile
//     for (int i = 1; i < N / 2; i++)
//         sum1 += (1 << i);

//     //we put remaining n/2 coins in second pile
//     for (int i = N / 2; i < N; i++)
//         sum2 += (1 << i);

//     cout << abs(sum1 - sum2) << endl;
// }

int main()
{
    int t, n, a[10000];
    cin >> t;
    while (t--)
    {
        // solve()
        long long int ans = 0, sum1 = 0, sum2 = 0;
        int div = 0;
        cin >> n;
        int k = 0;
        for (int i = 1; i <= n; i++)
        {
            a[k++] = pow(2, i);
        }

        div = n / 2;
        sum1 = a[n - 1];
        for (int i = 0; i <= div - 2; i++)
        {
            sum1 += a[i];
        }
        for (int i = div - 1; i < n - 1; i++)
        {
            sum2 += a[i];
        }
        ans = abs(sum1 - sum2);
        cout << ans << endl;
    }

    return 0;
}
