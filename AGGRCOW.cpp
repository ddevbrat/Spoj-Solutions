#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<int>::iterator low,high;

int check(int num,int a[], int n, int c)
{
    int co=1,temp=a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]-temp>=num)
        {
            temp=a[i];
            co++;
            if (co==c)
                return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,c;

        cin >> n >> c;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);

        int l = 0, r = a[n-1], max = -1;

        while(r>l)
        {
            ll mid = (l+r)/2;
            if(check(mid, a, n, c)==1)
            {
                if(mid>max)
                    max = mid;
                l = mid+1;
            }

            else r = mid;
        }

        cout << max << endl;

    }
}
