#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int a,d;
 while(1)
 {
     cin >> a >> d;
     if(a==0 && d==0)
        break;
    int at[11], dt[11];

    for(int i=0; i<a; i++)
    {
        cin >> at[i];
    }

    for(int i=0; i<d; i++)
    {
        cin >> dt[i];
    }
    sort(at, at+a);
    sort(dt, dt+d);;

    if(at[0]<dt[1])
        cout << "Y" << endl;

    else cout << "N" << endl;
}
}
