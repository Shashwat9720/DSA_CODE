// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
 int determinant(vector<vector<int>>a,int n)
 {
     int sign=1;
    int det=0;
    int i,j,k;
    

     if(n==2)
 {   
     return a[0][0]*a[1][1]-a[1][0]*a[0][1];
 }
 else
 {
  for(i=0;i<n;i++)
  {  vector<vector<int>>v;
      for(j=1;j<n;j++)
  {   vector<int>arr;
for(k=0;k<n;k++)
    {    if(k!=i)
         {arr.push_back(a[j][k]);}

         }
         
     
     v.push_back(arr);

  }

  det+=sign*a[0][i]*determinant(v,n-1);
  sign*=-1;

  }
  return det;}


 }




int main()
{int i,j,n;
cout<<"Enter the dimensions of the matrix\n";
cin>>n;
vector<vector<int>>a;
cout<<"Enter the elements of the matrix\n";
for(i=0;i<n;i++)
{ vector<int>arr;
    for(j=0;j<n;j++)
 { int x;
  cin>>x;
  arr.push_back(x);
 }
 a.push_back(arr);

}
cout<<"The matrix is:\n";
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{
    cout<<a[i][j]<<" ";
}
cout<<endl;
}
cout<<"The determinant of the given matrix is:"<<endl<<determinant(a,n);





}
