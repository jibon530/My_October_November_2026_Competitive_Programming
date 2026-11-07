/*
It's me Jibon
Problem Link:https://codeforces.com/contest/1853/problem/B
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll n,ll k)
{
    int ans = 0;
    for(ll i = 0; i <= n; i++)
    {
        ll second = n;
        ll first = i;
        bool ok = true;
        for(ll j = k-2; j >= 1;j--)
        {
            ll newel = second - first;
            if(newel > first) 
            {
                ok = false;
                break;
            }
            if(newel < 0)
            {
                ok = false;
                break;
            }
            second = first;
            first = newel;
        }
        if(ok) ans++;
    }
    cout << ans << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        ll n,k; cin >> n >> k;
        solution(n,k);
    }
    return 0;
}