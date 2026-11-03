/*
It's me Jibon
Problem Link:
*/
#include <bits/stdc++.h>
using namespace std;
void ans(vector <int>& num,int n)
{
    int left = 0, right = n-1;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            cout << num[left] << " ";
            left++;
        }
        else
        {
            cout << num[right] << " ";
            right--;
        }
    }
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ans(v,n);
    }
    return 0;
}