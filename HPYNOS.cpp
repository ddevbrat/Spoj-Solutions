#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int a[10000001] = {0};
int main()
{
    ll n;
    cin >> n;
    ll sum = 10;
    ll temp = n;
    ll count = 0;
    while(sum>9)
    {
        sum = 0;
        while(temp!=0)
        {
            ll r = temp%10;
            sum = sum + (r*r);
            temp = temp/10;
            //cout << sum << endl;
        }
        temp = sum;
        count++;
    }

    if(sum == 1)
        cout << count << endl;

    else cout << "-1" << endl;
}
