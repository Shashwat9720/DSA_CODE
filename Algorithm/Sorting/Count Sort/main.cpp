#include <iostream>

using namespace std;


void sort(int A[],int n,int k)
{ int i,j,l,count[k+1],B[100];
for(i=0;i<=k;i++)
{
    count[i]=0;
}
for(i=0;i<n;i++)
{
    count[A[i]]++;
}

for(i=1;i<=k;i++)
{
    count[i]=count[i-1]+count[i];
}
for(i=n-1;i>=0;i--)
{
    B[--count[A[i]]]=A[i];
}
for(i=0;i<n;i++)
{
    A[i]=B[i];
}


}

int main()
{int i,n,A[100],max;
max=-1;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>A[i];

}
for(i=0;i<n;i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
}
sort(A,n,max);
for(i=0;i<n;i++)
{cout<<A[i]<<" ";}


    return 0;
}
