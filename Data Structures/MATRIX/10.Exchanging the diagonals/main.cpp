#include <iostream>

using namespace std;

int main()
{int i,j,k,n,m,p,q,A[100][100],temp;
cout<<"Enter the number of rows and column of the first matrix\n";
cin>>n>>m;
cout<<"Enter the elements of the first matrix\n";
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{
    cin>>A[i][j];
}

}
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{  if(i==j)
    {temp=A[i][j];
    A[i][j]=A[i][n-1-i];
    A[i][n-1-i]=temp;
}

}}
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{
    cout<<A[i][j]<<" ";
}
cout<<"\n";

}

    return 0;}
