/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/96/A
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    char ch = s[0];
    int count = 0;
    bool ok = false;
    for(char c : s)
    {
        if(ch == c)
        {
            count++;
            if(count == 7) 
            {
                ok = true;
                break;
            }
        }
        else
        {
            ch = c;
            count = 1;
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}