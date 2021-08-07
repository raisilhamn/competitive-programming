#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/* notes
 capital of Berland has n children
 ll the children in this school are gifted:
  some of them are good at programming
  some are good at maths, 
  others are good at PE (Physical Education)
 ti = 1, if the i-th child is good at programming, 
 ti = 2, if the i-th child is good at maths,
 ti = 3, if the i-th child is good at PE
 Each child happens to be good at exactly one of these three subjects.

 The Team Scientific Decathlon Olympias requires teams of three students. 
 The school teachers decided that the teams will be composed of 
    three children that are good at different subjects.
 that is, each team must have one mathematician, one programmer and one sportsman. 
 What is the maximum number of teams that the school will be able to present at the Olympiad? 
 How should the teams be formed for that?
 
 Each child must participate in no more than one team.
*/

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    vector<int> math, prog, pe;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            prog.push_back(i);
        else if (x == 2)
            math.push_back(i);
        else if (x == 3)
            pe.push_back(i);
    }
    int ans = min(math.size(), min(prog.size(), pe.size()));
    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {

        cout << math[i] << " " << prog[i] << " " << pe[i] << endl;
    }
    return 0;
}