#include <iostream>

using namespace std;


int main()
{int i,j,key,n,m,A[100][100],k;
k=0;
cout<<"Enter the dimensions of the matrix\n";
cin>>n>>m;
cout<<"Enter the elements of the matrix\n";
 for(i=0;i<n;i++)
 {for(j=0;j<m;j++)
     {
         cin>>A[i][j];
     }
 }
  for(i=0;i<n;i++)
 {for(j=0;j<m;j++)
     {
         cout<<A[i][j]<<" ";
     }
     cout<<"\n";
 }
 cout<<"Enter the element to be found\n";
 cin>>key;
 i=0;
 j=m-1;
 while(i<n&&j>=0)
 {if(A[i][j]==key)
    {
        k=1;
        break;
    }
    if(A[i][j]>key)
    {
        j--;
    }
    if(A[i][j]<key)
    {
        i++;
    }}
 if(k==1)
 {
     cout<<"The element has been found at i="<<i<<" and j="<<j<<endl;
 }
 else
 {
     cout<<"The element not found\n";
 }


    return 0;
}
