/*
It's me Jibon
Problem Link:https://toph.co/p/challenging-lover?in=cat~~-~number-theory
*/

#include <bits/stdc++.h>
using namespace std;
bool cheak_prime(int n)
{
    if(n <= 0 || n == 1) return false;
    for(int i = 2; i*i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int print_divisor(int n)
{
    vector <int> divisor;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            divisor.emplace_back(i);

            if(i != (n/i))
            {
                divisor.emplace_back(n/i);
            }
        }
    }
    int sumation = 0;
    int size = divisor.size();
    for(int i = 0; i < size;i++)
    {
        sumation += divisor[i];
    }
    return sumation;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        int ans = print_divisor(num);
        if(cheak_prime(ans))
        {
            cout << "Yes\n";
        }
        else cout << "No\n";
    }
    return 0;
}