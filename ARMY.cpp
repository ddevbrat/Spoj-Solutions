#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int a, b, maxa=0, maxb=0;

        for(int i=0; i<n; i++)
        {
            cin >> a;
            if(a >= maxa)
                maxa = a;
        }
        for(int i=0; i<m; i++)
        {
            cin >> b;
            if(b>maxb)
                maxb = b;
        }

    if(maxa>=maxb)
        cout << "Godzilla" << endl;

    else cout << "MechaGodzilla" << endl;
    }
}
