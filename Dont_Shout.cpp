/*
It's me Jibon
Problem link:https://toph.co/p/don-t-shout?in=cat~~-~implementation
*/
#include <bits/stdc++.h>
using namespace std;
bool cheak(string word)
{
    for(char ch : word)
    {
        if(islower(ch)) return true;
    }
    return false;
}
signed main()
{
    string s; getline(cin,s);
    vector <string> v;
    stringstream ss(s);
    string va;
    while(ss >> va)
    {
        if(cheak(va)) v.emplace_back(va);
    }
    for(auto val : v) cout << val << " ";
    cout << '\n';
    return 0;
}