#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include <fstream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#define M 1000000007
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    int k = 1;
    while(t--)
    {
        ll x;
        int n;
        cin >> x >> n;

        ll a[n];

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        //cout << x << endl;

        sort(a, a+n);

        int j = n-1;
        int count = 0;
        while(x>0 && j>=0)
        {
            x = x - a[j];
            j--;
            count++;
            //cout << x << endl;
        }


        cout << "Scenario #" << k << ":" << endl;
        k++;
        if(j<=0 && x>0)
            cout << "impossible" << endl;

        else cout << count <<  endl;
    }
    return 0;
}
