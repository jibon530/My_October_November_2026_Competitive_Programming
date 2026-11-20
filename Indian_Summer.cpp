#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector < pair <string, string>> v;
    for(int i = 0; i < n; i++)
    {
        string val1, val2;
        cin >> val1 >> val2;
        v.emplace_back(val1,val2);
    }
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end()) - v.begin();
    cout << sz << '\n';
    return 0;
}