#include <iostream>

using namespace std;

int main()
{int i,j,n,A[100],temp,min;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Sorting the array\n";
for(i=0;i<n-1;i++)
{min=i;
for(j=i+1;j<n;j++)
{ if(A[min]>A[j])
{
    min=j;
}

}
if(i!=min)
{
    temp=A[i];
    A[i]=A[min];
    A[min]=temp;
}

}
for(i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}


    return 0;
}
