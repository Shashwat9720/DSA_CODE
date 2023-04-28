#include<bits/stdc++.h>

using namespace std;

class hash_map
{  public:
    vector<int>hash_table;
     void create(int n)
    {
            for(int i=0;i<n;i++)
              hash_table.push_back(INT_MAX);

    }
    void insert(int x)
    {  int n=hash_table.size();
        int probe=x%n;
        int offset=(n-1)-(x%(n-1));
        while(hash_table[probe]!=INT_MAX)
        probe=(probe+offset)%n;
        hash_table[probe]=x;
        
    }
    int search(int x)
    {  int n=hash_table.size();
        int probe=x%n;
        if(hash_table[probe]==x)
        return probe+1;
        int offset=(n-1)-(x%(n-1));
        do
        {
             probe=(probe+offset)%n;
        }
        
         while(hash_table[probe]!=x&&hash_table[probe]!=INT_MAX&&probe!=x%n);

         
        if(hash_table[probe]!=x)
        return 0;
        return probe+1;

       

    }
    void remove(int x)
    {
        int probe=search(x)-1;
        if(probe==-1)
        return;
        hash_table[probe]=INT_MIN;
    }




};
int main()
{ cout<<"Enter the number of elements to be inserted\n";
int n;
cin>>n;
hash_map* my_hash=new hash_map();
my_hash->create(n+1);
cout<<"Enter the values to be inserted\n";
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    my_hash->insert(x);
}
int k=1;
do
{cout<<"Enter the value to be searched\n";
int x;
cin>>x;
if(my_hash->search(x))
cout<<"Element found\n";
else 
cout<<"Element not found\n";
cout<<"Do you wish to continue\n";
cin>>k;
} while (k);







}
