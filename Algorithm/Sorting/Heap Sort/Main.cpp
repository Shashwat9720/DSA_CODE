#include<bits/stdc++.h>

using namespace std;

void heapify(vector<int>&arr,int n,int i)
{
    int largest=i;
    if(2*i+1<n&&arr[2*i+1]>arr[largest])
    largest=2*i+1;
    if(2*i+2<n&&arr[2*i+2]>arr[largest])
    largest=2*i+2;
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void buildheap(vector<int>&arr,int n)
{
    for(int i=n-1;i>=0;i--)
    heapify(arr,n,i);
}
int main()
{cout<<"Enter the size of the array\n";
int n;
cin>>n;
vector<int>a(n);
cout<<"Enter the elements of the array\n";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Sorting the array...\n";
buildheap(a,n);
cout<<endl;
while(n>0)
{
    swap(a[0],a[n-1]);
    n--;
    heapify(a,n,0);
}
cout<<"Sorted array:";
for(int i=0;i<a.size();i++)
cout<<a[i]<<" ";
cout<<endl;
}