#include <bits/stdc++.h>
using namespace std;

vector <int> ans (int &n)
{
    vector <int> v;
    vector <int> vect = {10,100,1000,10000,100000};
    
    for(int &val : vect)
    {
        if(n % val != 0)
        {
            v.emplace_back(n%val);
            n -= (n%val);
        }
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        vector <int> answere = ans(num);
        cout << answere.size() << "\n";
        for(auto &it: answere)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}