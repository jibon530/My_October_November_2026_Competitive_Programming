#include <bits/stdc++.h>
using namespace std;

int answere(string & str, int n)
{
    int ans = n,count = 0;
    for(int i = 0; i < n; i++)
    {
        count++;
        if(str[i] == '1')
        {
            ans = max(ans,(i+1)*2);
            count++;
        }
    }
    ans = max(count,ans);

    reverse(str.begin(),str.end());
    count = 0;
    for(int i = 0; i < n; i++)
    {
        count++;
        if(str[i] == '1')
        {
            ans = max(ans,(i+1)*2);
            count++;
        }
    }
    ans = max(count,ans);
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << answere(s,n) << "\n";
    
    }
    return 0;
}