/*
It's me Jibon
Problem Link:https://codeforces.com/contest/2285/problem/0
*/
#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{
    if(n <= 3) cout << "-1\n";
    else{
        cout << "4 3 2 1 ";
        for(int i = 5;i <= n; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        solution(n);
    }
    return 0;
}