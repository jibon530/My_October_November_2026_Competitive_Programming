/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1941/c
*/
#include <bits/stdc++.h>
using namespace std;
int solution(string s,int n)
{
    int i = 0,ans = 0;
    while(i < n)
    {
        if(i+5 <= n && s.substr(i,5) == "mapie") 
        {
            i+= 5;
            ans++;
        }
        else if(i+3 <= n && s.substr(i,3) == "map")
        {
            i+= 3;
            ans++;
        }
        else if(i+3 <= n && s.substr(i,3) == "pie")
        {
            i+= 3;
            ans++;
        }
        else i++;
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    string s;
    cin >> n >> s;
    cout << solution(s,n) <<  '\n';
    }
    return 0;
}