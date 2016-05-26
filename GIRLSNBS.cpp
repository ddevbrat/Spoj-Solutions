#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int g,bo;

    while(1)
    {
        int a,b;

        cin >> g >> bo;

        if(g==-1 && bo==-1)
            break;
        int ans;
        if(g==bo)
        {
            if(g>0)
            ans = 1;
            else ans = 0;
        }
    else
    {
        a = g>bo?g:bo;
        b = g<bo?g:bo;


        if(a%(b+1)==0)
            ans = a/(b+1);
        else ans = (a/(b+1)) + 1;
    }
    cout << ans <<endl;
    }
    return 0;
}
