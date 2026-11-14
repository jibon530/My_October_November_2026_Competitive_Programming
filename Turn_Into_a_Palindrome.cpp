/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/2267/A
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        string s; char c; int n; cin >> n >> c >> s;
        int st = 0, end = n-1,ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[st] != s[end] && s[st] != c)
            {
                s[st] = c;
                ans++;
            }
            st++;
            end--;
        }
        cout << ans << '\n';
    }
    return 0;
}