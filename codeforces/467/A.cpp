#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int people, room, move(0);
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> people >> room;
        if ((room - people) >= 2 )
        {
            move++;
        }
    }
    cout << move << endl;
    
    return 0;
}
