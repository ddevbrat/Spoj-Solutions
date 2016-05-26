#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    char a[100];
    cin >> a;

    int b[100];

    for(int i=strlen(a)-1; i>=0; i--)
    {
        b[i] = a[i] - '0';
    }

    for(int i=strlen(a)-1; i>0; i--)
    {
        b[i] = (b[i]*2)%10;
        b[i-1] = b[i-1] + (b[i]/10);

    }

    if((b[0]*2)>=10)
    {

    }


}
