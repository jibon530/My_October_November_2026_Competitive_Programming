/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1935/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solution(string s, ll n)
{
    string rev = s;
    string ans;
    reverse(rev.begin(),rev.end());
    if(n % 2 == 0)
    {
        if(s <= rev) ans = s;
        else{
            ans = rev+s;
        }
    }
    cout << ans << '\n';

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        solution(s,n);
    }
    return 0;
}