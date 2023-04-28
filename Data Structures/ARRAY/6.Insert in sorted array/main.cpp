#include <iostream>

using namespace std;

int main()
{int i,n,A[100],key;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the element\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Enter the value of element you want to insert\n";
cin>>key;
for(i=n;i>=0;i--)
{   if(key<A[i-1])
    {A[i]=A[i-1];}
    else
    {
        A[i]=key;
        break;
    }
}
for(i=0;i<=n;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}
