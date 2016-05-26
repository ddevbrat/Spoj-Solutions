#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    while(1)
    {
        ll n;
        bool flag = 0;
        cin >> n;

        if(n==-1)
            break;

        else
        {

            if(((4*n)-1)%3 == 0)
            {
                ll s = ((4*n)-1)/3;

                if (sqrt(s)==floor(sqrt(s)))
                    flag = 1;
            }
        }

        if(flag)
            cout << "Y" << endl;

        else cout << "N" << endl;
    }
}
