/*
It's me Jibon
Problem link:https://codeforces.com/contest/903/problem/C
*/
#include <bits/stdc++.h>
using namespace std;
const int mx = 5e3+5;
int a[mx];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<int,int>m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    int ans = m[a[0]];
    // for(int i = 0; i < n; i++)
    // {
    //     ans = max(ans,m[a[i]]);
    // }
    for(auto val : m)
    {
        ans = max(ans,val.second);
    }
    cout << ans << '\n';
    return 0;
}