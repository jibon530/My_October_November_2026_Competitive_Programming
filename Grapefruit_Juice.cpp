/*
It's me Jibon
Problem Link:https://codeforces.com/contest/2292/problem/B
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
        ll n, k, p;
        cin >> n >> k >> p;
        vector<ll> v(n);
        ll ans = 0;

        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += v[i];
        }
        sort(v.begin(), v.end());
        for(ll i = 0; i + k <= n; i += k)
        {
            ll sum = 0;
            for(ll j = i; j < i + k; j++) sum += v[j];
            if(sum < p) ans += p-sum;
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}