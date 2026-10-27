/*
Let's try something new.
It's me Jibon
Problem link: https://codeforces.com/problemset/problem/1861/A
*/
#include <iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >>  t;
    while(t--)
    {
        std::string s;
        std::cin >> s;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '1')
            {
                std::cout << "13\n";
                break;
            }
            else if(s[i] == '3')
            {
                std::cout << "31\n";
                break;
            }
        }
    }
    return 0;
}