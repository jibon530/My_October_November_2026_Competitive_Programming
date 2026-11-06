/*
It's me Jibon
Problem link:https://codeforces.com/contest/2284/problem/A1
*/
#include <iostream>
using namespace std;
long long solution(long long n)
{
    long long ans = (n / 2) * ((n + 1) / 2);
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << solution(n) << '\n';
    }
    return 0;
}