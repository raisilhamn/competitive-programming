#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
A snake is a pattern on a n by m table
Denote c-th cell of r-th row as (r, c).
The tail of the snake is located at (1, 1),
hen it's body extends to (1, m)
then goes down 2 rows to (3, m)
then goes left to (3, 1) and so on.

Your task is to draw this snake for Fox Ciel: 
the empty cells should be represented as dot characters ('.') 
and the snake cells should be filled with number signs ('#').

!! Input : The only line contains two integers: n and m (3 ≤ n, m ≤ 50). 
*/

using namespace std;

int main()
{
    fastio;
    // int m, n;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         bool haveSnake = false;
    //         if (i % 2 == 1)
    //             haveSnake = true;
    //         else
    //         {
    //             if (i % 4 == 2)
    //                 haveSnake = (j == m);
    //             if (i % 4 == 0)
    //                 haveSnake = (j == 1);
    //         }
    //         cout << (haveSnake ? "#" : ".");
    //     }
    //     cout << endl;
    // }
    int n, m;
    bool right = true, left = false;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i & 1)
            {
                cout << "#";
            }
            else
            {
                if (right == true)
                {
                    if (j == m)
                    {
                        cout << "#";
                        right = false;
                        left = true;
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else if (left == true)
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                        if (j == m)
                        {
                            left = false;
                            right = true;
                        }
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}