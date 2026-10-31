/*It's me Jibon
Problem Link:https://codeforces.com/contest/2278/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        string p, q;
        cin >> n >> m;
        cin >> p >> q;
        int freq[26] = {};
        for(char c : p)
            freq[c - 'a']++;
        for(char c : q)
            freq[c - 'a']--;
        bool ok = true;
        for(int i = 0; i < 26; i++)
        {
            int expected = 0;
            if(i == ('s' - 'a') || i == ('i' - 'a') || i == ('x' - 'a'))
            {
                expected = 1;
            }
            if(freq[i] != expected)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}