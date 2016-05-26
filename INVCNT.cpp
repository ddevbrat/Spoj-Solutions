#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll merge(int arr[],int left,int mid,int right)
{
  int temp[300000];
  int i=left;
  int j=mid;
  int k=left;
  ll count =0;
  while((i<=mid-1)&&(j<=right))
    {
      if(arr[i]<=arr[j])
        {
          temp[k]=arr[i];
          k++;
          i++;
        }
      else
        {
          temp[k]=arr[j];
          k++;
          j++;
          count+=mid-i;
        }
    }
  while(i<=mid-1)
  {
    temp[k]=arr[i];
    k++;
    i++;
  }
  while(j<=right)
  {
    temp[k]=arr[j];
    k++;
    j++;
  }
  for(int i=left;i<=right;i++)
  {
    arr[i]=temp[i];
  }
  return count;
}

ll mergesort(int arr[],int left,int right)
{

  if(right>left)
    {
     ll mid=(left+right)/2;
     ll temp1= mergesort(arr,left,mid);
     ll temp2= mergesort(arr,mid+1,right);
     ll temp3=merge(arr,left,mid+1,right);
     return temp1+temp2+temp3;
    }
  return 0;
}
int main()
{
  int t;
  cin>>t;
  int a[300000];
  while(t--)
    {
      int n;
      cin>>n;

      for(int i=0;i<n;i++)
        cin>>a[i];
      cout<<mergesort(a,0,n-1)<<endl;
    }
}

