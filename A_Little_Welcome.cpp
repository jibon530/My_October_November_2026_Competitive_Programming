/*
It's me Jibon
Problem Link:https://toph.co/arena?contest=bangladesh-girls-2026-preliminary-university#!/p/6ae421c490182e54a2e352ae
*/
#include <bits/stdc++.h>
using namespace std;
void cheak(int n)
{
    bool ok = true;
    if(n % 2 == 0)
    {
        ok = false;
    }
    cout << (ok ? "Welcome to BdGPC! Happy coding!\n" : "Welcome to BdGPC! Happy problem-solving!\n");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int last_digit = n % 10;
    cheak(last_digit);
    return 0;
}