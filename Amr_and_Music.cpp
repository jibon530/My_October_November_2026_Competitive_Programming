#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    vector <pair <int,int>> p;
    for(int i = 0; i < n;i++)
    {
        p.emplace_back(v[i],i+1);
    }
    vector <int> answere;
    sort(p.begin(),p.end());
    int ans = 0;
    for( auto val : p)
    {
        if(ans + val.first <= k)
        {
            answere.emplace_back(val.second);
            ans += val.first;
        }
        else
        {
            break;
        }
    }
    cout << answere.size() << "\n";
    for(auto & val : answere)
    {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}