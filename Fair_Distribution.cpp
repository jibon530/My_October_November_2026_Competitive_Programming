/*
It's me Jibon
Problem Link:https://toph.co/p/fair-distribution?in=cat~~-~mathematics
*/
#include <iostream>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y; cin >> x >> y;
    int z = y % x;
    int ans = x - z;
    cout << ans << '\n';
    return 0;
}