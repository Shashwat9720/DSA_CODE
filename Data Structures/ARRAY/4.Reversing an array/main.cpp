#include <iostream>

using namespace std;

int main()
{int i,n,A[100],temp;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
for(i=0;i<n/2;i++)
{temp=A[i];
A[i]=A[n-1-i];
A[n-1-i]=temp;

}
for(i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
}
