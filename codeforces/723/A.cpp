#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
/* notes
The first friend lives at the point x1, 
the second friend lives at the point x2, 
and the third friend lives at the point x3
They plan to celebrate the New Year together, so they need to meet at one point. 
What is the minimum total distance they have to travel 
 in order to meet at some point and celebrate the New Year?
*/

using namespace std;

int main()
{
    fastio;
    int a, b, c;
    vector<int> vec;
    cin >> a >> b >>c;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin(), vec.end());
    a = (vec.at(1) - vec.at(0)) + (vec.at(2) - vec.at(1)) ; 
    cout << a << endl;
    return 0;
}
