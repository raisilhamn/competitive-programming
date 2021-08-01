#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, pas;
    cin >> a;
    pas = a / 5;
    if (a % 5 > 0)
    {
        pas++;
    }
    cout << pas << endl;
}
