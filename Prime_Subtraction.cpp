/*
Let's try something new.
It's me Jibon
Problem Link:https://codeforces.com/problemset/problem/1238/A
*/
#include <iostream>
using ll = long long;
void solution(ll &a,ll &b)
{
    ll def = a - b;
    if(def == 1)
        {
            std::cout << "NO\n";
        }
        else
        {
            std::cout << "YES\n";
        }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while(t--)
    {
        ll x,y;
        std::cin >> x >>y;
        solution(x,y);
    }
}