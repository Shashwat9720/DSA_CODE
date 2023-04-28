#include <iostream>

using namespace std;

int main()
{int i,n,j,m,A[100],B[100],C[100];
cout<<"Enter the number of elements in the first array\n";
cin>>n;
cout<<"Enter the elements of array\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Enter the number of elements in the second array\n";
cin>>m;
cout<<"Enter the elements of array\n";
for(j=0;j<m;j++)
{
    cin>>B[j];
}
if(n==m)
{
    for(j=0;j<m;j++)
{
    C[j]=A[j]+B[j];
}
for(j=0;j<m;j++)
{
   cout<<C[j]<<" ";
}
}
else
{
    cout<<"The arrays cannot be added\n";
}
    return 0;
}
