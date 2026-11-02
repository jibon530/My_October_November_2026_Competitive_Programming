/*
It's me Jibon
Problem link: https://codeforces.com/problemset/problem/579/A
*/
#include <bits/stdc++.h>
using namespace std;

int ans (long long n)
{
    string s = "";
    while(n > 0)
    {
        int rem = n % 2;
        s += to_string(rem);
        n /= 2;
    }
    int ans = count(s.begin(),s.end(),'1');
    return ans;
}

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a;
    cin >> a;
    cout << ans(a) << '\n';
    return 0;
}