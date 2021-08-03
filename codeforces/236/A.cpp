#include <iostream>
using namespace std;

int main()
{
    string str;
    int jumlah, pass = 1;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                jumlah++;
            }
        }
        if (jumlah == 0)
        {
            pass++;
        }
        jumlah = 0;
    }

    if (pass % 2 == 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}