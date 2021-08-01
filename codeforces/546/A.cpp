#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int k, n, w, price(0), borrow;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        price = price + k*i;
        
    }
    if (price > n)
    {
        borrow = price - n;
    }
    else{
        borrow = 0;
    }
    
    cout << borrow << endl;


    return 0;
}
