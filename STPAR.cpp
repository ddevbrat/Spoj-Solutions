#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin >> n;

        if(n==0)
            break;

        else
        {
            int a[n];
            stack<int> s;

            for(int i=0; i<n; i++)
                cin >> a[i];

            int temp = 1;
            bool flag = 1;
            for(int i=0; i<n; i++)
            {

                while((s.size()!=0) &&s.top()==temp)
                    {
                        s.pop();
                        temp++;
                    }

                if(a[i] == temp)
                    temp++;

                else if(s.size()!=0 && s.top()<a[i])
                {
                    flag = 0;
                    break;
                }
                else s.push(a[i]);
            }


            if(flag == 0)
                cout << "no" << endl;

            else cout << "yes" << endl;
        }
    }

}
