#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, h;
    cin >> n >> h;
    int a, bent(0);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
        {
            bent++;
        }
        bent++;
    }

    cout << bent << endl;
    return 0;
}
