/*It's me Jibon
Problem link:https://codeforces.com/problemset/problem/110/A
*/

#include <bits/stdc++.h>
using namespace std;

string solution(string & str)
{
    int count4,count7,c = 0;
    count4 = count(str.begin(),str.end(),'4');
    count7 = count(str.begin(),str.end(),'7');

    int lucky = count4 + count7;

    if(lucky == 4 || lucky == 7)
    {
        return "YES\n";
    }
    else
    {
        return "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    cout << solution(s);
    return 0;
}