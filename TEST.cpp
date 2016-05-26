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
    int n;
    while(1)
    {
        scanint(n);
        if(n!=42)
            cout << n << endl;
        else break;
    }

    return 0;
}
