/*
It's me Jibon
Problem link: https://codeforces.com/problemset/problem/913/A
Hey, Did you sleep well. (^_^)
*/
#include <iostream>
using namespace std;
long long findpow(long long a,long long b)
{
    if(b == 0) return 1;
    if(b == 1) return a;
    long long x = findpow(a,b/2);
    long long ans = 0;
    if(b % 2 == 1) ans = x*x*a;
    else ans = x*x;
    return ans;
}
int main()
{
    long long n,m;
    cin >> n >> m;
    if(n > 30)
    {
        cout << m << "\n";
    }
    else
    {
        long long cheak = findpow(2,n);
        long long ans = (m % cheak);
        cout << ans << "\n";
    }
    return 0;
}