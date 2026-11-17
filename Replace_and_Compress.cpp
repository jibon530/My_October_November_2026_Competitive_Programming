/*
It's me Jibon
Problem link:https://codeforces.com/contest/2276/problem/B
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
        string s; cin >> s;
        int ans = 1;
        if(s.find("101") != string::npos || s.find("010") != string::npos) ans++;
        if(s.find("111") != string::npos || s.find("000") != string::npos) ans++;
        cout << ans << '\n';
    }
    return 0;
}