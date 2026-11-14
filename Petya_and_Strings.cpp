/*
It's me Jibon
Problem link:https://codeforces.com/problemset/problem/112/A
*/
#include <bits/stdc++.h>
using namespace std;
string upper(string & str)
{
    for(char & x: str)
    {
        x = toupper(x);
    }
    return str;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2; cin >> s1 >> s2;
    s1 = upper(s1); s2 = upper(s2);
    if(s1 == s2) cout << "0\n";
    else if(s1 <= s2) cout << "-1\n";
    else cout << "1\n";
    return 0;
}