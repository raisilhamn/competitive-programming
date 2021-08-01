#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    int hitung = 0;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            hitung += 1;
        }
        n /= 10; //* langsung dibuang digit terakhir
    }

    if (hitung == 4 || hitung == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
