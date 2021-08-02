#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, dif, breaker(0);
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> dif;
        if (dif == 1)
        {
            breaker++;
        }
        
    }
    if (breaker != 0)
    {
        cout << "Hard" << "\n";
    }else{
        cout << "Easy" << "\n";
    }
    

    
    return 0;
}
