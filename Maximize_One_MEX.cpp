#include <bits/stdc++.h>
using namespace std;

int get_mex(const vector<int>& a, int tg_idx)
{
    vector<bool> vis(a.size() + 2, false);
    for (int i = 1; i <= tg_idx; i++) {
        vis[a[i]] = true;
    }
    int mex = 0;
    while (vis[mex]) {
        mex++;
    }
    return mex;
}

void answere()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    int tg_idx = n - k + 1;
    int best_mex = get_mex(a, tg_idx);
    int ans_i = -1, ans_j = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            swap(a[i], a[j]);
            int new_mex = get_mex(a, tg_idx);
            if (new_mex > best_mex)
            {
                best_mex = new_mex;
                ans_i = i;
                ans_j = j;
            }
            swap(a[i], a[j]);
        }
    }
    
    if (ans_i == -1)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << ans_i << " " << ans_j << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        answere();
    }
    return 0;
}