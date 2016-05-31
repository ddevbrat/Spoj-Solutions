#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;

    ll a[n][m];
    ll dp[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin >> a[i][j];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0)
                dp[i][j] = a[i][j];

            else if(j==0)
            {
                dp[i][j] = min(dp[i-1][j], dp[i-1][j+1]) + a[i][j];
            }

            else if(j == m-1)
            {
                dp[i][j] = min(dp[i-1][j], dp[i-1][j-1]) + a[i][j];
            }

            else
            {
                dp[i][j] = min(min(dp[i-1][j], dp[i-1][j-1]), dp[i-1][j+1]) + a[i][j];
            }
        }
    }
    ll min = dp[n-1][0];
    for(int i=0; i<m; i++)
    {
        if(dp[n-1][i]<min)
            min = dp[n-1][i];
    }

    cout << min << endl;

     /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout << dp[i][j] << " ";

        cout << endl;
    }*/
}
