/*
It's me Jibon
Problem Link: https://codeforces.com/contest/2284/problem/A2
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solution(int n)
{
    vector<ll> a(n);
    ll total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a[i] = (1LL << val);
        total_sum += a[i];
    }
    sort(a.rbegin(), a.rend());

    ll part1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (part1 + a[i] <= total_sum / 2)
            part1 += a[i];
    }
    
    ll part2 = total_sum - part1;
    ll ans = part1 * part2;
    cout << ans << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solution(n);
    }
    return 0;
}