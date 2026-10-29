/*
It's me Jibon
Problem link:https://toph.co/p/gcd-plus-lcm?in=cat~~-~number-theory
*/
#include <iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while(t--)
    {
        long long a,b;
        std::cin >> a >> b;
        if(a % b == 0 || b % a == 0) std::cout << "true\n";
        else std::cout << "false\n";
    }
    return 0;
}