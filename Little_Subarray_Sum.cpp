/*
It's me Jibon
Problem link:https://toph.co/p/little-subarray-sum?in=cat~~-~mathematics
*/
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void sub_arr(vector <ll> & vect,int n,int a,int b)
{
    for(ll i = 1; i < n;i++)
    {
        vect[i] += vect[i-1];
    }
    ll sum;
    if(a == 0) sum = vect[b];
    else
    {
        sum = vect[b] - vect[a-1];
    }
    cout << sum <<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin >> n >> a >> b;
    vector <ll> v(n);
    for(ll i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    sub_arr(v,n,a,b);
    return 0;
}