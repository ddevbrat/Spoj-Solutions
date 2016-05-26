#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(n==0)
            break;

        else
        {
            int a[n+1];
            for(int i=1; i<=n; i++)
            {
                cin >> a[i];
            }
            int flag = 0;
            for(int i=1; i<=n; i++)
            {
                if (i != a[a[i]])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag)
                cout << "non ambiguous" << endl;

            else cout << "ambiguous" << endl;
        }
    }
}
