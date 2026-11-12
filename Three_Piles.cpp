/*
It's me Jibon
Problem link:https://codeforces.com/contest/2290/problem/A
*/
#include <iostream>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        int mx = max(a,b); mx = max(mx,c);
        int mi = min(a,b); mi = min(mi,c);
        if(a + 1 == b && b + 1 == c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}