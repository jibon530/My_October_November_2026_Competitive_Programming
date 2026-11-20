/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/166/A
*/
#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int,int>& p1,pair<int,int>& p2)
{
    if(p1.first > p2.first) return 1;
    else if(p1.first == p2.first)
    {
        return (p1.second < p2.second);
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin >> n >> k;
    vector < pair <int,int>> v;
    for(int i = 0; i < n; i++)
    {
        int val1,val2; cin >> val1 >> val2;
        v.emplace_back(val1,val2);
    }
    sort(v.begin(),v.end(),ok);
    int ans = 0;
    for(auto val : v)
    {
        if(val == v[k-1]) ans++;
    }
    cout << ans << '\n';
    return 0;
}