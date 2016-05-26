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
    ll a[5000];

    for(int i=1; i<5000; i++)
    {
        a[i] = (i*(i+1))/2;
    }
    int t;
    scanint(t);

    while(t--)
    {
        int n;
        scanint(n);

        int i = 1;

        while(a[i]<n)
        {
            i++;
        }

        int temp = i;
        //cout << temp << endl;

        if(temp%2 == 0)
        {
            cout << "TERM " << n << " IS " << n - a[temp-1] << "/" << temp - (n-a[temp-1]) + 1 << endl;
        }

        else cout << "TERM " << n << " IS " << temp -(n-a[temp-1]) +1 <<"/" <<  n - a[temp-1]<< endl;
    }
}
