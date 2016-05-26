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

bool isprime(int n){

if(n==1)
    return 0;
if(n==2)
    return 1;

if(n%2==0)
    return 0;

for(int i=3; i<=sqrt(n); i+=2)
{
    if(n%i==0){
        return 0;
        }

}

return 1;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;

        cin >>n >> m;

        for(int i=n; i<=m; i++)
        {
            if(isprime(i))
                cout << i<< endl;
        }
    }

    return 0;
}
