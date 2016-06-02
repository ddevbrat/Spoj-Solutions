#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll, ll> dp;

ll dpf(ll n)
{

    if(n==0)
    return n;

    if(dp[n] == 0)
        dp[n] = max(n, (dpf(n/2) + dpf(n/3) + dpf(n/4)));

    return dp[n];
}
int main()
{
    ll n;
    while(cin >> n)
    {

            cout << dpf(n) << endl;
    }
    return 0;
}
