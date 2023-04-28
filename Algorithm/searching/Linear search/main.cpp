#include <iostream>

using namespace std;

int main()
{int i,n,A[100],k,key;
k=1;
cout<<"Enter the number of elements of the array\n";
cin>>n;
cout<<"Enter the elements of the array\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
cout<<"Enter the number to be searched\n";
cin>>key;
for(i=0;i<n;i++)
{   if(key==A[i])
    {   k=0;
        cout<<"Element found at "<<i+1<<" position";
    break;
    }
}
if(k==1)
{
    cout<<"Element not found\n";
}
    return 0;
}
