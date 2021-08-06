#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
menyimpan angka random
pasangan
So, there are four numbers on a board in random order: a+b, a+c, b+c and a+b+c.
You have to guess three numbers a, b and c using given numbers. 
Print three guessed integers in any order.
a, b and c can be equal (it is also possible that a=b=c).
*/

using namespace std;

int main()
{
    fastio;
    int b(4);
    vector<int> a(4);
    for (auto &it : a)
        cin >> it; // memasukkan satu per satu ke vector
    sort(a.begin(), a.end());
    for (size_t i = 0; i < a.size() - 1; i++)
    {
        std::cout << a.back() -a.at(i)<< " " ;
    }
    

    return 0;
}