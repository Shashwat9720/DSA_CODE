#include <iostream>

using namespace std;
void merge(int A[],int L,int mid,int R)
{ int temp,i,j,k,B[100];
k=L;
i=L;
j=mid+1;
 while(k<=R)
 {  if(i<=mid&&j<=R)
 { if(A[i]<=A[j])
 {B[k]=A[i];
     i++;}
 else
 {B[k]=A[j];
     j++;}}
 else if(j>R)
 {B[k]=A[i];
     i++;}
 else
 {B[k]=A[j];
     j++;}
     k++;}
for(k=L;k<=R;k++)
{
    A[k]=B[k];
}

}


void Sort(int A[],int L,int R)
{  int mid;
    if(L<R)
{  mid=(L+R)/2;
  Sort(A,L,mid);
  Sort(A,mid+1,R);
  merge(A,L,mid,R);}



}


int main()
{ int i,n,A[100];
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{cin>>A[i];}

cout<<"Sorting the elements\n";
Sort(A,0,n-1);
for(i=0;i<n;i++)
{cout<<A[i]<<" ";}

    return 0;
}
