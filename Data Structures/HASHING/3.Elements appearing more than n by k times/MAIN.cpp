#include<bits/stdc++.h>

using namespace std;

vector<int> distinct(int a[],int n,int k)
{
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    m[a[i]]++;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((*i).second>n/k)
        v.push_back((*i).first);
    }
    return v;
}

int main()
{
    cout<<"Enter the number of elemetns\n";
    int n;
    cin>>n;
    cout<<"Enter the value of k\n";
    int k;
    cin>>k;
    cout<<"Enter the elements\n";
    int a[n];
    for(int i=0;i<n;i++)
   cin>>a[i];
   vector<int>v=distinct(a,n,k);
   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

}