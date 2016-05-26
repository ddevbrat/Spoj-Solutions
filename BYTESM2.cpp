#include<iostream>
#include<cstdio>
#include<math.h>
#include<vector>
#define gc getchar
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int h, w;

        cin >> h >> w;

        int a[h][w], dp[h][w];
        int ans = 0;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                cin >> a[i][j];

                if(i==0)
                {
                    dp[i][j] = a[i][j];
                }

                else
                {
                    if(j == 0)
                        dp[i][j] = max(dp[i-1][j], dp[i-1][j+1]) + a[i][j];

                    else if(j == w-1)
                        dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i][j];

                    else
                        dp[i][j] = max(max(dp[i-1][j-1], dp[i-1][j]), dp[i-1][j+1]) + a[i][j];
                }
                if(dp[i][j]>ans)
                    ans = dp[i][j];
            }
        }
        cout << ans << endl;
    }

}
