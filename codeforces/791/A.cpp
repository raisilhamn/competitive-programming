#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Right now, Limak and Bob weigh a and b respectively.
    // It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.
    // Limak eats a lot and his weight is tripled after every year,
    // while Bob's weight is doubled after every year.
    // After how many full years will Limak become strictly larger (strictly heavier) than Bob?

    int a, b;
    int count = 0;
    cin >> a >> b;    
    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        count++;
    }
    cout << count << endl;
    return 0;
}