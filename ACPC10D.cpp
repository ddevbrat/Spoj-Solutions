#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
      ll x = 1;
    while(1)
    {
    ll n;
    cin >> n;

    if(n==0)
        break;

    else{

    ll a[n][3];
    ll dp[n][3];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
            cin >> a[i][j];
    }

    for(int i=0; i<3; i++)
    {
        dp[0][i] = a[0][i];
    }
    dp[0][0] = 2147483647;
    dp[0][2] = a[0][2] + a[0][1];

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {

                if(j==0)
                {
                    dp[i][j] = min(dp[i-1][0], dp[i-1][1]) + a[i][j];
                }

                if(j==1)
                {
                    dp[i][j] = min(min(dp[i-1][0], dp[i-1][1]), min(dp[i-1][2], dp[i][0])) + a[i][j];
                }

                if(j==2)
                {
                    dp[i][j] = min(min(dp[i-1][1], dp[i-1][2]), dp[i][1]) + a[i][j];
                }
            }


        }


   // cout << endl;

   /* for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/

    cout << x++ << ". " << dp[n-1][1] << endl;
    }
}
}
