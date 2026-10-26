#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ans(vector<ll>& nums, ll& n)
{
    ll an = nums[n - 1];
    ll mx = an - 1;

    for(ll i = n - 2; i >= 0; i--)
    {
        ll take = min(nums[i], mx);
        take = max(0LL, take);
        an += take;
        mx = take - 1;
    }
    return an;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> vect(n);

    for(ll i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    cout << ans(vect, n) << '\n';
    return 0;
}