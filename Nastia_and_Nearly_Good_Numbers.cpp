/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1521/A
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        ll a,b; cin >> a >> b;
        if(b == 1) cout << "NO\n";
        else{
        ll x = a*b, y = a;
        ll z = x + y;
        cout << "YES\n" << x  << " "<< y << " " << z << '\n';
        }
    }
    return 0;
}