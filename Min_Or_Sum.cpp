/*
It's me Jibon
Problem link:https://codeforces.com/problemset/problem/1635/A
*/
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n,ans = 0;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        int value;
        cin >> value;
        ans |= value;
    }
    cout << ans << '\n';
}

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}