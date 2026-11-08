/*
It's me Jibon
Problem Link: https://toph.co/p/black-or-white?in=cat~~-~mathematics
*/
#include <bits/stdc++.h>
using namespace std;
string odd_even(int num)
{
    if(num == 0) return "odd";
    if(num % 2) return "even";
    else return "odd";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b; cin >> a >> b;
    int al = (int)a[a.size() - 1];
    int bl = (int)b[b.size() - 1];
    string aa = odd_even(al);
    string bb = odd_even(bl);
    if(aa == bb) cout << "Black\n";
    else cout << "White\n";
    return 0;
}