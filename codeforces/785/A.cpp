#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes


*/

using namespace std;

int main()
{
    fastio;
    int t, sisi(0);
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        if (str == "Tetrahedron")
        {
            sisi += 4;
        }
        else if (str == "Cube")
        {
            sisi += 6;
        }
        else if (str == "Octahedron")
        {
            sisi += 8;
        }
        else if (str == "Dodecahedron")
        {
            sisi += 12;
        }
        else if (str == "Icosahedron")
        {
            sisi += 20;
        }
    }
    cout << sisi << endl;
    return 0;
}