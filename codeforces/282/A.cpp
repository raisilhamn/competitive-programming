#include <iostream>

using namespace std;

int main()
{

    string x;
    int a, c(0);
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        if (x[0] == '+')
        {
            c++;
        }
        else if (x[0] == '-')
        {
            c--;
        }
        else if (x[0] == 'X' && x[1] == '-')
        {
            c--;
        }
        else if (x[0] == 'X' && x[1] == '+')
        {
            c++;
        }
    }
    cout << c << endl;
}