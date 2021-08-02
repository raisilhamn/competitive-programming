#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, grup(0);
    cin >> n;
    string domino[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> domino[i];
    }
    // check group

    for (size_t i = 0; i < n ; i++)
    {
        if (domino[i] != domino[i+1] )
        {
            grup++;
        }
        
    }
    
    cout << grup << endl;
    
    return 0;
}
