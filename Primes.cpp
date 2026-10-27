/*
It's me Jibon
Problem link: https://codeforces.com/problemset/gymProblem/102267/B
*/

#include <bits/stdc++.h>
using namespace std;

bool cheak_prime(int& n)
{
    if(n == 0 || n == 1) return false;
    for(int i = 2; i*i <= n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,nn;
    cin >> n;
    nn = n - 2;
    if(cheak_prime((nn)))
    {
        cout << "2 " << nn << "\n";
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}