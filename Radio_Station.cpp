/*
It's me Jibon
Problem linl:https://codeforces.com/contest/918/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;
    map <string,string> mp;
    for(int i = 0; i < n; i++)
    {
        string nm,ip; cin >> nm >> ip;
        mp[ip] = nm;
    }
    for(int i = 1; i  <= m; i++)
    {
        string s1,s2; cin >> s1 >> s2;
        s2.pop_back();
        cout << s1 << " " << s2 << "; #" << mp[s2] << '\n';
    }
    return 0;
}