#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i != n - 1)
        {
            cout << "that ";
        }
        else
        {
            cout << "it ";
        }
    }
    return 0;
}
