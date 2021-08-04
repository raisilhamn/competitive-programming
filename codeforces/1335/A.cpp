#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007

/* notes
Alice will get a 
Betty will get b 
a>b
all the candies will be given to one of two sisters 
*/

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       int candy;
       cin >> candy;
       cout << (candy - 1) / 2 << endl; // * default c++ adalah pembulatan ke bawah
    }

    return 0;
}