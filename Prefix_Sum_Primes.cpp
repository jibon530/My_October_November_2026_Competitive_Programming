/*
It's me Jibon
Problem Link: https://codeforces.com/problemset/problem/1149/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int one = 0, two = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x == 1)
            one++;
        else
            two++;
    }

    if(two == 0)
    {
        for(int i = 0; i < one; i++)
            cout << "1 ";
    }
    else if(one == 0)
    {
        for(int i = 0; i < two; i++)
            cout << "2 ";
    }
    else
    {
        cout << "2 1 ";

        for(int i = 0; i < two - 1; i++)
            cout << "2 ";

        for(int i = 0; i < one - 1; i++)
            cout << "1 ";
    }

    cout << '\n';

    return 0;
}