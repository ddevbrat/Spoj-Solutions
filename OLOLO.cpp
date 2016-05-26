#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int temp = 0;
    for(int i=1; i<n-1; i++)
    {
        if(a[i]!=a[i+1] && a[i]!=a[i-1])
        {
            temp = i;
            break;
        }

    }
    if(a[0]!=a[1])
        temp = 0;

    if(a[n-1]!=a[n-2])
        temp = n-1;

    printf("%d\n", a[temp]);
}
