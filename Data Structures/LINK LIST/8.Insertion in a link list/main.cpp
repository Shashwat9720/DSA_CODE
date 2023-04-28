// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class node
{public:
    int data;
    node* next;

};
void print(node* h)
{
    node* temp=h;
    while(temp)
    {cout<<temp->data<<" ";
    temp=temp->next;
    }

}
node* head=0;
void insert(int x)
{  node* New=new node();
   New->data=x;
   New->next=0;
  if(head==0)
  { head=New;
  }
  else
  {
     New->next=head;
     head=New;

  }

}
int main()
{ int x,n;
do
{ cout<<"Enter the value you want to insert\n";
cin>>x;
insert(x);
    cout<<"Do you want to contine\n1-Yes\n0-No\n";
    cin>>n;
} while (n);
print(head);



}
