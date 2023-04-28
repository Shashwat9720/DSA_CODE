#include <iostream>

using namespace std;

int main()
{int i,n,A[100],L,R,M,k,key;
k=0;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements of the sorted array\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
L=0;
R=n-1;
cout<<"Enter the element to be searched\n";
cin>>key;
while(L<=R&&key<=A[R]&&A[L]<=key)
{ M=(L+R)/2;
  if(A[M]==key)
  {
      k=1;
      cout<<"The element is found at i="<<M+1<<endl;
      break;
  }
  else if(A[M]>key)
  {
      R=M-1;
  }
  else
  {
      L=M+1;
  }

}
if(k==0)
{
    cout<<"Element not found\n";
}


    return 0;
}
