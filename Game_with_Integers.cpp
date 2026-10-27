/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1899/A
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n;
        m = n % 3;
        if(m == 1 || m == 2)
        {
            cout << "First\n";
        }else cout << "Second\n";
    }
    return 0;
}