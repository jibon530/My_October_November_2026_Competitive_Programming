/*
It's me Jibon
Problem Link:https://toph.co/p/finding-a-mentor?in=tag~~-~stack
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<long long> s(n + 1);
    for (int i = 1; i <= n; i++) cin >> s[i];
    stack<int> st;

    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && s[st.top()] <= s[i]) st.pop();

        if (st.empty()) cout << -1;
        else cout << st.top();
        if (i < n) cout << " ";
        st.emplace(i);
    }
    cout << "\n";
    return 0;
}