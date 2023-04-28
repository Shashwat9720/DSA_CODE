#include<bits/stdc++.h>

using namespace std;

class HASH
{  vector<int>hash_table;
  public:
  void create(int n)
  {
      for(int i=0;i<n;i++)
      hash_table.push_back(INT_MAX);

  }
  void insert(int x)
  {  int n=hash_table.size();
      int k=x%n;
       int i=0;
    while(hash_table[(k+(i*i))%n]!=INT_MAX&&k<n)
        i++;
    if(i==n)
    return;
    hash_table[(k+(i*i))%n]=x;}
  int search(int x)
  {int n=hash_table.size();
      int k=x%n;
     int i=0;
    while(hash_table[(k+(i*i))%n]!=x&&i<n&&hash_table[(k+(i*i))%n]!=INT_MAX)
        i++;
    if(i==n||hash_table[(k+(i*i))%n]==INT_MAX)
    return -1 ;
    return (k+(i*i))%n;}
  
  void remove(int x)
  { 
      int k=search(x);
      if(k==-1)
      return;
      hash_table[k]=INT_MIN;

  }
  void print()
  { int n=hash_table.size();
      for(int i=0;i<n;i++)
      cout<<hash_table[i]<<" ";
  }
};


int main()
{ cout<<"Enter the number of elements to be inserted\n";
int n;
cin>>n;
cout<<"Enter the size of the hash table\n";
int k;
cin>>k;
HASH* my_hash=new HASH;
my_hash->create(k);
int x;
do
{cout<<"Enter operation to be performed\n1-Insert\n 2-Delete\n3-Search\n0-Exit\n";
int y;
cin>>x;
if(x)
{cout<<"Enter the value on which the operation must be performed\n";
cin>>y;}
switch (x)
{
case 1:my_hash->insert(y);
    break;
case 2:my_hash->remove(y);
break;
case 3: if(my_hash->search(y)!=-1)
cout<<"Found\n";
else 
cout<<"Not found\n";
default:
    break;
}
    /* code */
} while (x);

my_hash->print();




}