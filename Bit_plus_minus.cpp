#include <iostream>
using namespace std;

bool statement(string &st)
{
    if(st == "X++" || st == "++X")
    {
      return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    int answere = 0;
    cin >> t;
    while(t--)
    {   string s;
        cin >> s;
        if(statement(s))
        {
            answere++;
        }
        else 
        {
            answere--;
        }
    }
    cout << answere << "\n";
    return 0;
}