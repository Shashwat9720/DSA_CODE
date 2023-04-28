#include <iostream>

using namespace std;

int main()
{int i,j,n,m;
cout<<"Enter the dimensions of matrix\n";
cin>>n>>m;
int a[n][m];
  cout<<"Enter the elements\n";
  for(i=0;i<n;i++)
  {for(j=0;j<m;j++)
   {
       cin>>a[i][j];
   }

  }
  for(i=0;i<n;i++)
  {for(j=0;j<m;j++)
   {
       cout<<a[i][j]<<" ";
   }
      cout<<endl;
  }
    return 0;
}
