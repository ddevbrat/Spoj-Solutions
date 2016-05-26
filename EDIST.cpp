#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int dp[2001][2001];
int main()
{
    int t;
    cin >> t;

    for(int i=0; i<2001; i++)
    {
        dp[0][i] = i;
        dp[i][0] = i;
    }
    while(t--)
    {
        char a[2001];
        char b[2001];

        cin >> a;
        cin >> b;

        int la = strlen(a);
        int lb = strlen(b);

        for(int i=0; i<la; i++)
        {
            for(int j=0; j<lb; j++)
            {
                if(a[i]==b[j])
                    dp[i+1][j+1] = dp[i][j];

                else
                {
                    dp[i+1][j+1] = min(min(dp[i][j+1], dp[i+1][j]), dp[i][j]) + 1;
                }
            }
        }

        cout << dp[la][lb] << endl;

    }
}
