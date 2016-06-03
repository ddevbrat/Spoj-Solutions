#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n, h;

    cin >> n >> h;

    ll sum = 0;

    ll x;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x<=h)
            sum++;

        else sum+=2;
    }

    cout << sum << endl;
}
