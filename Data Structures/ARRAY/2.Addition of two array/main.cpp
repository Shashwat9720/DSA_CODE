#include <iostream>

using namespace std;

int main()
{int i,n,m;
  cout<<"Enter the number of elements in the array\n";
  cin>>n;
  int a[n];
  cout<<"Enter the elements\n";
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<"Enter the number of elements in the array\n";
  cin>>m;
  int b[m];
  cout<<"Enter the elements\n";
  for(i=0;i<m;i++)
  {
      cin>>b[i];
  }
  for(i=0;i<m;i++)
  {
      cout<<b[i]<<" ";
  }
  cout<<endl;
  if(n==m)
  {
      for(i=0;i<n;i++)
      {
          a[i]=a[i]+b[i];
      }
      for(i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  }
  else
  {
      cout<<"The arrays cannot be added\n";
  }
    return 0;
}
