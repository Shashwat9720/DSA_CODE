#include <iostream>
#include<math.h>
using namespace std;
int main()
{int i,j,k,n,m,p,q,A[100][100],B[100][100],C[100][100],trace;
float norm;
norm=trace=0;
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
    {trace=trace+A[i][j];}
    norm=norm+pow(A[i][j],2);

}

}
norm=sqrt(norm);
cout<<"The norm is "<<norm<<"\n";
cout<<"The trace is "<<trace<<"\n";

    return 0;
}
