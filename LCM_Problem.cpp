/*
It's me Jibon
Problem link:https://codeforces.com/problemset/problem/1389/A
*/
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        ll l,r;
        cin >> l >> r;
        ll x = l, y = 2*l;
        if(y <= r)
        {
            cout << x << " " << y <<'\n';
        }
        else
        {
            cout << "-1 -1\n";
        }
    }
    return 0;
}