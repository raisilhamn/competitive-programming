#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
at first number of rounds n is defined
In every round each of the players throws a 
    cubical dice with distinct numbers from 1 to 6 written on its faces
Player, whose value after throwing the dice is greater, wins the round. 
    In case if player dice values are equal, no one of them is a winner.

In average, player, who won most of the rounds, is the winner of the game. 
In case if two players won the same number of rounds, the result of the game is draw.
*/

using namespace std;

int main()
{
    fastio;
    int t, mW(0), cW(0);
    
    cin >> t;
    
    while(t--)
    {
       int m, c;
       cin >> m >> c;
       if ( m == c) 
       {
           mW++;
           cW++;
       }else if (m > c)
       {
           mW++;
           
       }
       else
       {
           cW++;
       }
              
       
    }
    if (mW == cW)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else if (mW > cW)
    {
        cout << "Mishka" << endl;
    }
    else
    {
        cout << "Chris" << endl;
    }

    return 0;
}