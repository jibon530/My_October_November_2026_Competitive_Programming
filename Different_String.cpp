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
        string s,r;
        cin >> s;
        r = s;
        sort(r.begin(),r.end());
        if (r == s)
        {
            reverse(r.begin(),r.end());
        }
        if(r == s)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n" << r << '\n';
        }
    }
    return 0;
}