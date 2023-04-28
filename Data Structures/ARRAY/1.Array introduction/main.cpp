#include <iostream>

using namespace std;

int main()
{ int i,n;
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
    return 0;
}
