#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll a[n][3];
    ll dp[n][3];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
            cin >> a[i][j];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==0)
                dp[i][j] = a[i][j];

            else if(j == 0)
                dp[i][j] = min(a[i-1][0], a[i-1][1]) + a[i][j];

            else if(j == 1)
                dp[i][j] = min(min((dp[i-1][1]+dp[i][0]), ))
        }
    }
}
