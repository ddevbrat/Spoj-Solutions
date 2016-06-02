#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int a[2001];
int dp[2001][2001];

int recursive(int l , int r , int y){
    if(l>r)
        return 0;

    if(dp[l][r] != -1)
        return dp[l][r];

    return (dp[l][r] = max(recursive(l+1, r, y+1)+y*a[l] ,recursive(l,r-1,y+1)+a[r]*y));
}
int main(){
    int n;
    cin>>n;
    memset(dp , -1 , sizeof dp);
    for(int i = 0; i<n; i++)
        cin >> a[i];

    cout << recursive(0,n-1,1) << endl;
    return 0;
}
