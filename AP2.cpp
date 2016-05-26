#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        ll t3, tl3, a=0, d=0, n=0,s;

        cin >> t3 >> tl3 >> s;

        n = (2*s)/(t3 + tl3);
        d = (tl3-t3)/(n-5);
        a = t3 - (2*d);

        cout << n << endl;

        for(int i=0; i<n; i++)
            cout << a + (i*d) << " ";
    }
}
