#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, drink;
    cin >> n;
    double ans = 0.0, sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin >> drink;
        sum += drink;
    }
    ans = sum / n;
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}
