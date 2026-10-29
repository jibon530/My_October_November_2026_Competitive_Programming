/*
It's me Jibon
Problem Link:https://toph.co/p/magic-number?in=cat~~-~number-theory
*/
#include <iostream>
#include <cmath>
using namespace std;

bool cheak_magic(long long &n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(long long i = 3; i*i <= n;i+=2)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long num,sq;
        cin >> num;
        if(num <= 0)
        {
            cout << "NO.\n"; 
            continue;
        }

        sq = round(sqrt(num));
        if(((sq * sq) == num) && cheak_magic(sq)) cout << "YES.\n";
        else cout << "NO.\n";
    }
    return 0;
}