#include <iostream>

using namespace std;

string b;
int a, c(0);

int main()
{
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b[0] == '+')
        {
            c++;
        }
        else if (b[0] == '-')
        {
            c--;
        }
        else if (b[0] == 'X' && b[1] == '-')
        {
            c--;
        }
        else if (b[0] == 'X' && b[1] == '+')
        {
            c++;
        }
    }
    cout << c << endl;
}