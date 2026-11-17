/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/2276/A
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
        int a,b; cin >> a >> b;
        if(a <= b) cout << "-1\n";
        else{
            int k = min(b,a-b);
            cout << k << '\n';
        }
    }
    return 0;
}