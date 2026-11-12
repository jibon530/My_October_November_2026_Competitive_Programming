/*
It's me Jibon
Problem link:https://codeforces.com/contest/2290/problem/B
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
        int n;
        string s; cin >> n >> s;
        int ans = 0;
        if(s[0] != 'R') ans++;
        int first = 0,second = 1;
        for(int i = 0; i < n; i++)
        {
            if(s[first] == s[second]) ans++;
            first++;
            second++;
        }
        cout << ans << '\n';
    }
    return 0;
}