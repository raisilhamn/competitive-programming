#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
Find the minimum area of a square land on which you can place two identical rectangular a×b houses.
You are given two identical rectangles with side lengths a and b (1≤a,b≤100) — positive integers 
    (you are given just the sizes, but not their positions). 
Find the square of the minimum area that contains both given rectangles. 
    Rectangles can be rotated (both or just one), moved, but the sides 
    of the rectangles should be parallel to the sides of the desired square. 

Two rectangles can touch each other (side or corner), but cannot intersect. 

*/

using namespace std;

int solve(int a, int b)
{
    int side = min(max(a * 2, b), max(a, b * 2));
    return side * side;
}

int main()
{
    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        //    The rectangles touch by width, we get the side of the square equal to max(2b,a),
        //    The rectangles touch by height, we get the side of the square equal to max(2a,b).
        //    Thus, the minimum side of the square is equal to the minimum of these two options.
        //    Then the answer is
        // (min(max(2b,a),max(2a,b)))^2.
        cout << solve(a,b) << endl;

    }
    return 0;
}