#include<bits/stdc++.h>

using namespace std;

int search(int a[],int n,int x)
{ int l=0;
int h=n-1;
while(l<=h)
{ int mid=(l+h)/2;
  int y=a[mid];
  if(x==y)
  return mid;
  if(mid!=0)
  y=max(a[mid-1],y);
  {if(x==y)
  return mid-1;}
  if(mid!=n-1)
  {y=min(a[mid+1],y);
   if(x==y)
   return mid+1;
  }
  if(x>y)
  l=mid+1;
  if(x<y)
  h=mid-1;
}
return -1;
}

int main()
{ int n;
cout<<"Enter the number of elements\n";
cin>>n;
cout<<"Enter the elements\n";
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the element to be searched\n";
int x;
cin>>x;
cout<<search(a,n,x)<<endl;

}
