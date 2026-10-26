#include <bits/stdc++.h>
using namespace std;

string answere(string & str,int n)
{
    int i = 0,j = n - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            int def = abs(str[i] - str[j]);
            if(def != 2)
            {
                return "NO\n";
            }
        }
        i++;
        j--;
    }
    return "YES\n";

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
        cout << answere(s,n);
    }
    return 0;
}