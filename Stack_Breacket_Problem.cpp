#include <bits/stdc++.h>
using namespace std;
bool Isbalaced(char c1, char c2)
{
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']');
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack <char> st;
        bool ok = true;
        for(auto c : s)
        {
            if(c == '(' || c == '{' || c == '[') st.emplace(c);
            else
            {
                if(st.empty())
                {
                    ok = false; 
                    break;
                }
                else{
                    if(Isbalaced(st.top(), c))
                    {
                        st.pop();
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
        }
        if(!st.empty()) ok = false;
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}