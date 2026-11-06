/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1974/B
*/
#include <bits/stdc++.h>
using namespace std;
void soluction()
{
    int n; string s;
    cin >> n >> s;
    set <char> st;
    for(int i = 0; i < n; i++)
    {
        st.emplace(s[i]);
    }
    vector <char> v;
    for(auto &ch : st)
    {
        v.emplace_back(ch);
    }
    map <char,char> mp;
    int sz = v.size();
    for(int i = 0; i < sz;i++)
    {
        mp[v[i]] = v[sz - i - 1];
    }
    for(int i = 0; i < n; i++)
    {
        cout << mp[s[i]];
    }
    cout << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        soluction();
    }
    return 0;
}