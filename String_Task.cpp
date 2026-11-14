/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/118/A
*/
#include <bits/stdc++.h>
using namespace std;
string solution(string & str)
{
    string new_str = "";
    for(char & x: str)
    {
        x = tolower(x);
        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y')
        {
            new_str += '.';
            new_str += x;
        }
    }
    return new_str;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1; cin >> s1;
    s1 = solution(s1);
    cout << s1 << '\n';
    return 0;
}