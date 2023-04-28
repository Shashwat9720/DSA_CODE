#include<bits/stdc++.h>

using namespace std;

void bucket_sort(int a[],int n)
{ int mx=0;
  int k=n/5;
  vector<int>v[k];
  for(int i=0;i<n;i++)
    mx=max(mx,a[i]); 
    mx++;
    for(int i=0;i<n;i++)
     v[(a[i]*k)/mx].push_back(a[i]);
   for(int i=0;i<k;i++)
   sort(v[i].begin(),v[i].end());
   int l=0;
   for(int i=0;i<k;i++)
   {
         for(int j=0;j<v[i].size();j++)
         a[l++]=v[i][j];
   }

    



}

int main()
{  int n;
cout<<"Enter the size of array\n";
cin>>n;
int a[n];
cout<<"Enter the elements of the array\n";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Sorting the array...\n";
bucket_sort(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";

}