#include <iostream>

using namespace std;

int main()
{int i,j,k,n,m,p,q,A[100][100],B[100][100],C[100][100];
cout<<"Enter the number of rows and column of the first matrix\n";
cin>>n>>m;
cout<<"Enter the elements of the first matrix\n";
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{
    cin>>A[i][j];
}

}
cout<<"Enter the number of rows and column of the second matrix\n";
cin>>p>>q;
cout<<"Enter the elements of the first matrix\n";
for(i=0;i<p;i++)
{for(j=0;j<q;j++)
{
    cin>>B[i][j];
}

}
cout<<"The product of two matrix\n";
if(m==p)
{for(i=0;i<n;i++)
{for(j=0;j<q;j++)
{  C[i][j]=0;
    for(k=0;k<m;k++)
{
    C[i][j]=C[i][j]+A[i][k]*B[k][j];
}

}

}
for(i=0;i<n;i++)
{for(j=0;j<q;j++)
{
   cout<<C[i][j]<<" ";
}
cout<<"\n";

}

}
else
{
    cout<<"The two matrix cannot be multiplied\n";
}
    return 0;
}
