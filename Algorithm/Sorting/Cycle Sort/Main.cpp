#include<bits/stdc++.h>

using namespace std;

void cycle_sort(int a[],int n)
{ 
for(int cycle_start=0;cycle_start<n-1;cycle_start++)
{ int curr_pos=cycle_start;
int curr_elem=a[curr_pos];
do
{curr_pos=cycle_start;
for(int i=cycle_start+1;i<n;i++)
if(a[i]<=curr_elem)
curr_pos++;
while(a[curr_pos]==curr_elem&&curr_pos!=cycle_start)
curr_pos--;
swap(a[curr_pos],curr_elem);

}
while(curr_pos!=cycle_start);
}


}

int main()
{ int n;
cout<<"Enter the size of the array\n";
cin>>n;
int a[n];
cout<<"Enter the elements of the array\n";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Sorting the array....\n";
cout<<"The sorted array-\n";
cycle_sort(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";



}