#include <iostream>

using namespace std;

int main()
{int i,j,n,A[100],temp;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
 cin>>A[i];
}
cout<<"Sorting the array\n";
for(i=0;i<n-1;i++)
{for(j=0;j<n-1;j++)
 {if(A[j]>A[j+1])
 {
     temp=A[j];
     A[j]=A[j+1];
     A[j+1]=temp;
 }
 }
}
for(i=0;i<n;i++)
{
 cout<<A[i]<<" ";
}
    return 0;
}
