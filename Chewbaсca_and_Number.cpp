#include <bits/stdc++.h>
using namespace std;

string ans(string & str)
{
    string num = "";
    for(char & val: str)
    {
        int x = val - '0';
        int inv = 9 - x;
        num += min(x,inv) + '0';
    }
    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,num;
    cin >> s;
    num = ans(s);
    if(num[0] =='0')
    {
        num[0] = '9';
    }
    cout << num << "\n";
    return 0;
}