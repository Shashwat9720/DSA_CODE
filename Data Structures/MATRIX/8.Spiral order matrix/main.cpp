#include<bits/stdc++.h>

using namespace std;

int main()
{int i,j,A[100][100],n,m,k;
vector<int>v;
int num=1;
int x=1;
cout<<"Enter the dimensions of matrix\n";
cin>>n>>m;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
    {
        cin>>A[i][j];
    }
}
cout<<"In normal order the matrix is "<<endl;
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{
    cout<<A[i][j]<<" ";
}
cout<<"\n";

}
cout<<"In spiral order the matrix is "<<endl;
for(k=0;;k++)
{
  if(k<n)
   {i=k;
for(j=k;j<m-k;j++)
{
    v.push_back(A[i][j]);
    num++;
    if(num>n*m)
    { x=0;
      break;
    }
}}
if(x==0)
{
    break;
}
if(k<m)
{j=m-1-k;

for(i=k+1;i<n-k;i++)
{
    v.push_back(A[i][j]);
    num++;
    if(num>n*m)
    { x=0;
      break;
    }
}}
if(x==0)
{
    break;
}
if(k<n)
{i=n-1-k;

for(j=m-2-k;j>=k;j--)
{
    v.push_back(A[i][j]);
    num++;
    if(num>n*m)
    { x=0;
      break;
    }
}}
if(x==0)
{
    break;
}
if(k<n)
{j=k;

for(i=n-2-k;i>k;i--)
{
    v.push_back(A[i][j]);
    num++;
    if(num>n*m)
    { x=0;
      break;
    }
}}
if(x==0)
{
    break;
}

}
for(i=0;i<num-1;i++)
{
  cout<<v[i]<<" ";
}
    return 0;
}
