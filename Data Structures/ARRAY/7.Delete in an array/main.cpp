#include <iostream>

using namespace std;

int main()
{int i,n,A[100],pos,key;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the element\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Enter the position  you want to delete\n";
cin>>pos;
pos--;
for(i=pos;i<n;i++)
{
    A[i]=A[i+1];
}
for(i=0;i<n-1;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
