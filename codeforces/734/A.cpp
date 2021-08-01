#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    int a, aWin(0), dWin(0);
    cin >> a;
    string win;
    cin >> win;
    for (size_t i = 0; i < a; i++)
    {
        if (win[i] == 'A')
        {
            aWin++;
        }
        else{
            dWin++;
        }
        
    }
    if (aWin > dWin)
    {
        cout << "Anton" << endl;
    }
    else if (dWin > aWin)
    {
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
    
    
    
    
    
    
    return 0;
}
