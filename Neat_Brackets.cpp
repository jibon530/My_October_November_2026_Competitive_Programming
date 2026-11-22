/*
It's me Jibon
Problem Link:https://toph.co/p/neat-brackets?in=cat~~-~implementation
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack <char> st;
    for(char ch : s)
    {
        if(ch == '(') st.emplace(ch);
        else{
            if(st.empty()) 
            {
                cout << "No\n";
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}