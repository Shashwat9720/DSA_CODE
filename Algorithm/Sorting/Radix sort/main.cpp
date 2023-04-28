#include <iostream>
#include<math.h>
using namespace std;
void count(int A[],int n,int E)
{   int i,count[10],B[100],k,j,C[100];
    for(i=0;i<=9;i++)
    {
        count[i]=0;

        }


    j=pow(10,E);
    for(i=0;i<n;i++)
     {
         C[i]=(A[i]/j)%10;}


  for(i=0;i<n;i++)
  {count[C[i]]++;}

  for(i=0;i<=9;i++)
  {
      count[i]=count[i]+count[i-1];
  }
  for(i=n-1;i>=0;i--)
  {
         B[--count[C[i]]]=A[i];
  }
  for(i=0;i<n;i++)
  {
      A[i]=B[i];
  }

  }




void sort(int A[],int n)
{  int i,temp,max,j;
max=-1;
for(i=0;i<n;i++)
 { j=0;
  temp=A[i];
  while(temp!=0)
  { temp=temp/10;
   j++;
if(max<j)
{max=j;}}

}
for(j=0;j<max;j++)
 {count(A,n,j);}

 }


int main()
{int A[100],i,n;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
sort(A,n);
for(i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}


    return 0;}


