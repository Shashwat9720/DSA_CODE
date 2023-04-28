#include <iostream>

using namespace std;
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void compare(int A[],int L, int gap,int R)
{  int i,j,k;
    i=L;
 j=gap+i;
 k=i-gap;
  while(j<=R)
  {
      if(A[i]>A[j])
    {
        swap(&A[i],&A[j]);
        if(A[i]<A[k]&&k>=0)
        {
            swap(&A[i],&A[k]);
        }
    }
     i++;
     j++;
     k++;

  }

}
void sort(int A[],int L,int gap ,int R)
{
while(gap>0)
{compare(A,L,gap,R);
    gap=gap/2;
    sort(A,L,gap,R);}



}




int main()
{int i,j,n,A[100],gap;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
if(n%2==1)
{gap=n/2;}
else
{
    gap=n/2-1;
}
sort(A,0,gap,n-1);
for(i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}

    return 0;
}
