/*
It's me Jibon
Problem Link:https://codeforces.com/contest/855/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map <string,bool> m;
    for(int i = 0; i < n; i++)
    {
        string val; cin >> val;
        if(m[val] == 1) cout << "YES\n";
        else cout << "NO\n";
        m[val] = 1;
    }
    return 0;
}