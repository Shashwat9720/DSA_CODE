#include <iostream>

using namespace std;

int main()
{int i,n,A[100],key,pos;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the element\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Enter the position and value of element you want to insert\n";
cin>>key>>pos;
pos--;

for(i=n;i>pos;i--)
{   A[i]=A[i-1];

}
A[pos]=key;

for(i=0;i<=n;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
