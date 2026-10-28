/*
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1743/A
*/
#include <iostream>
using namespace std;
int fact(int n)
{
    if(n == 0) return 1;
    int f = 1;
    for(int i = 1; i <= n;i++)
    {
        f *= i;
    }
    return f;
}
int nCr(int n,int r)
{
    if(r == 0 || r == n) return 1;
    if(r > n) return 0;
    return (fact(n) / (fact(r) * fact(n-r)));
}
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
        for(int i = 0;i < n;i++)
        {
            int x;
            cin >> x;
        }
        int num = 10 - n;
        cout << nCr(num,2) * 6 << '\n';
    }
    return 0;
}