/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1527/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a = 0;
        while(n > 0)
        {
            n >>= 1;
            a++;
        }
        ll ans = (1<<(a-1)) -1;
        cout << ans <<'\n';
    }
    return 0;
}