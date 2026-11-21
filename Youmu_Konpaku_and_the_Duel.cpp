/*
It's me Jibon
Problem Link:https://codeforces.com/contest/2288/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int solution(int x)
{
    if(x <= 4) return x;
    for(int m = 1; ; m++)
    {
        int c = (2 * m - 1) / 3;
        int a = m - c;
        int damage = a * (2 * c + 3 - a) / 2;
        if(damage >= x) return m;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        cout << solution(x) << '\n';
    }
}