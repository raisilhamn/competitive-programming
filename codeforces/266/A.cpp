#include <iostream>
using namespace std;
string b;
int a, c;
int main()
{
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        if (b[i] == b[i + 1])
        {
            c++;
        }
    }
    cout << c;

    // https://codeforces.com/problemset/problem/266/A
    // solusi : https://github.com/fuwutu/CodeForces/blob/master/266A%20-%20Stones%20on%20the%20Table.cpp
    // solusi : https://github.com/buglinjo/codeforces/blob/master/266A%20-%20Stones%20on%20the%20Table.cpp
}