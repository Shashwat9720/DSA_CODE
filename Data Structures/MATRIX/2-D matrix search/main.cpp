#include <iostream>

using namespace std;

int main()
{int i,j,k,x,n,m,A[100][100],I,J;
x=0;
cout<<"Enter the dimensions of the matrix\n";
cin>>n>>m;
cout<<"Enter the elements of the matrix\n";
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{cin>>A[i][j];}}
cout<<"Enter the element required to be searched\n";
cin>>k;
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{
    if(k==A[i][j])
    { I=i+1;
      J=j+1;
        x=1;
        break;
    }
    if(x==1)
    {
        break;
    }
}

}
if(x==1)
{
    cout<<"The element is found at i="<<I<<" and j="<<J<<endl;
}
else
{
    cout<<"The element not found\n";
}
    return 0;
}
