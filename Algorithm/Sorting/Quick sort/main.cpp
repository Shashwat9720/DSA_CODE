#include <iostream>

using namespace std;
int swap(int *p,int *q)
{int temp;
temp=*p;
*p=*q;
*q=temp;

}
int partition(int A[],int L,int R)
{ int start,end,pivot,temp;
 pivot=A[L];
 start=L;
 end=R;
 while(start<end)
 { while(A[start]<=pivot)
   {
       start++;
   }
   while(A[end]>pivot)
   {
       end--;
   }
   if(start<end)
   {
       swap(&A[start],&A[end]);
   }


 }

  swap(&A[L],&A[end]);


 return end;
}



void Quick_Sort(int A[],int L,int R)
{

    if(L<R)
    {    int pos=partition(A,L,R);
        Quick_Sort(A,L,pos-1);
        Quick_Sort(A,pos+1,R);
    }

}


int main()
{int i,n,A[100];
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Sorting the array\n";
Quick_Sort(A,0,n-1);
for(i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
