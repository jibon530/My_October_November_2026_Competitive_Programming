/*
It's me Jibon
Problem Link: https://codeforces.com/problemset/problem/1968/B
*/
#include <bits/stdc++.h>
using namespace std;
int max_prefix(string &s1,string &s2,int n,int m)
{
    int i  = 0, j = 0;
    while(i < n && j < m)
    {
        if(s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else j++;
    }
    return i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        cout << max_prefix(a,b,n,m) << '\n';
    }
    return 0;
}