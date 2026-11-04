/*
It's me Jibon
Problem Link:https://codeforces.com/contest/2283/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int l, r;
    cin >> l >> r;
    int n = r - l + 1;
    int ans;

    if(l > 0 || r < 0) ans = n - 1;
    else if(-l == r) ans = 0;
    else
    {
        int m = min(-l, r);
        ans = n - (2*m + 2);
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}