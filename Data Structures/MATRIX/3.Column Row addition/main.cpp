#include<iostream>
using namespace std;

int main()
{int i,j,k,n,m,p,q,A[100][100],B[100][100],C[100][100],RowSum[100],ColumnSum[100];
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
{
    cout<<A[i][j]<<" ";
}
 cout<<"\n";
}
for(i=0;i<n;i++)
{  RowSum[i]=0;
    for(j=0;j<m;j++)
{
    RowSum[i]=RowSum[i]+A[i][j];
}
cout<<"Sum for Row"<<i+1<<" is "<<RowSum[i]<<"\n";
}
for(j=0;j<m;j++)
{  ColumnSum[j]=0;
    for(i=0;i<n;i++)
{
    ColumnSum[j]=ColumnSum[j]+A[i][j];
}
cout<<"Sum for Column"<<j+1<<" is "<<ColumnSum[j]<<"\n";
}
    return 0;}
