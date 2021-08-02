#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    // f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n n
    long long n, a;
    cin >> n;
    if (n % 2 == 0)
        a = n / 2;
    else
        a = ((n + 1) / 2) * (-1);
    cout << a << "\n";

    return 0;
}
