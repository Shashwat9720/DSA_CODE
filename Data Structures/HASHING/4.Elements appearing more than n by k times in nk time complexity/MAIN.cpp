#include<bits/stdc++.h>

using namespace std;

vector<int> solution(int a[],int n,int k)
{
  vector<int>v;
 set<int>s;
int m=n/k;
for(int i=0;i<k;i++)
{
  int j=0;
  while(s.find(a[j])!=s.end()&&j<n)
  j++;
  int key=a[j];
  int count=1;
  j++;
  for(;j<n;j++)
  {
      if(s.find(a[j])==s.end())
      {if(a[j]==key)
      count++;
      else 
      count--;}
      if(count<1-(m-1))
      {
          key=a[j];
          count=1;
      }
  }
  count=0;
  for(j=0;j<n;j++)
  if(a[j]==key)
  count++;
  if(count>m)
  s.insert(key);



}


  for(auto i=s.begin();i!=s.end();i++)
   v.push_back((*i));
   return v;
 

}

int main()
{
    cout<<"Enter the number of elements in the array\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Ente the value of k\n";
    int k;
    cin>>k;
    vector<int>v=solution(a,n,k);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}