#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t; cin >> t;
    while(t--)
    {
        set<int>st1;
        set<int>st2;
        int l,a,b; cin >> l >> a >> b;
        for(int i = 1; i <= l; i++)
        {
            int val1 = i*a % l;
            st1.emplace(val1);
            int val2 = i*b % l;
            st2.emplace(val2);
        }
        int count = 0;
        int s1sz = st1.size(), s2sz = st2.size();
        if(s1sz <= s2sz)
        {
            for(auto val: st1)
            {
                if(st2.find(val) != st2.end())
                    count++;
            }
        }else{
            for(auto val : st2)
            {
                if(st1.find(val) != st1.end())
                    count++;
            }
        }
        cout << count << '\n';   
    }
    return 0;
}