/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1717/A
*/
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long int n,ans;
        cin >> n;
        ans = n + (n/2)*2 + (n/3)*2;
        cout << ans << '\n';
    }
    return 0;
}