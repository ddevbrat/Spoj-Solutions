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
    ll n;

    cin >> n;

    if((n&(n-1))==0 && n!=1)
    cout << "TAK" << endl;

    else cout << "NIE" << endl;

}
