/*
It's me Jibon
Problem Link:https://toph.co/arena?contest=bangladesh-girls-2026-preliminary-university#!/p/6ae4220990182e54a2e352ba
*/
#include <bits/stdc++.h>
using namespace std;
bool cheak(char c)
{
    bool ok = false;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        ok = true;
    return ok;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<char> v;
        for (char &c : s)
        {
            if (cheak(c))
            {
                v.emplace_back(c);
            }
        }
        int ans = 0;
        int l = 0, h = (int)v.size() - 1;
        while (l < h)
        {
            if (v[l] != v[h])
                ans++;
            l++;
            h--;
        }
        cout << ans << '\n';
    }
    return 0;
}