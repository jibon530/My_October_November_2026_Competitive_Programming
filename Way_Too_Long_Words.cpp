/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/71/A
*/
#include <bits/stdc++.h>
using namespace std;
void solution(string s,char st,char ed)
{
    if(s.size() == 1 ||s.size() == 2 || s.size() == 3)
    {
        cout << st << "0" << ed <<'\n';
    }
    else{
        cout << st << s.size()-2 << ed << '\n';
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        char st, ed;
        st = s[0]; ed = s[s.size()-1];
        if(s.size() > 10)
        {
            solution(s,st,ed);
        }
        else{
            cout << s << '\n';
        }
    }
    return 0;
}