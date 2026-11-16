/*
It's me Jibon
Problem link:https://codeforces.com/problemset/problem/339/A
*/
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    vector<char> nums;
    for(int i = 0;i < s.size();i += 2) 
    {
        nums.emplace_back(s[i]);
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if(i != nums.size() - 1)
        {
            cout << "+";
        }
    }
    cout << "\n";
    return 0;
}