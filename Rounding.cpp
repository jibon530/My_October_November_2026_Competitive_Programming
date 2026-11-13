/*
It's me Jibon
Problem link:https://codeforces.com/problemset/problem/898/A
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    int last = n % 10;
    if(last <= 5)
    {
        ll ans = n - last;
        cout << ans << '\n';
    }
    else{
        int a = 10 - last;
        ll ans = n + a;
        cout << ans << '\n';
    }
    return 0;
}