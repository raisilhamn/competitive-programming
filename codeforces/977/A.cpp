#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    // if the last digit of the number is non - zero, she decreases the number by one;
    // if the last digit of the number is zero,
    //she divides the number by 10(i.e.removes the last digit).
    int n, k, many;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
    }
    cout << n << endl;

    return 0;
}
