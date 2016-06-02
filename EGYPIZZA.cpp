#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll a1=0, a2=0, a3=0;
    for(int i=0; i<n; i++)
    {
        string s;

        cin >> s;

        if(s=="1/4")
        {
            a1++;
        }

        if(s=="3/4")
        {
            a3++;
        }

        if(s=="1/2")
        {
            a2++;
        }
    }
    ll ans = 0;
    ans=a3;
    a1=a1-a3;
    ans+=(a2-a2%2)/2;
    if(a2%2)
    {
        ans++;
        a1-=2;
    }
    if(a1 > 0)
    {
        ans+=(a1-(a1%4))/4;
        if(a1%4>0)
        {
            ans++;
        }
    }
    cout<<ans+1<<endl;
}
