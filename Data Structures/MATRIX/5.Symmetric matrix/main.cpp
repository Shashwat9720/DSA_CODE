#include <iostream>

using namespace std;

int main()
{int i,j,n,m,A[100][100],k;
cout<<"Enter the number of rows and column of the matrix\n";
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
    if(A[i][j]==A[j][i])
    {
        k=1;
    }
    else
    {
        k=0;
        break;
    }
}
if(k==0)
{
    break;
}

}
if(k==1)
{
    cout<<"The given matrix is symmetric\n";
}
else
{
    cout<<"The given matrix is not symmetric\n";
}
    return 0;
}
