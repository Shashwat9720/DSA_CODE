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
void insert(int x,int pos)
{  node* New=new node();
   New->data=x;
   New->next=0;
   node* temp;
   int i=1;
  if(head==0&&pos==1)
  { head=New;
  }
  else if(head!=0&&pos==1)
  {New->next=head;
  head=New;
  }
  else
  {
      temp=head;
      while(i<pos-1)
      {temp=temp->next;
      i++;}
      New->next=temp->next;
      temp->next=New;

  }

}
int main()
{ int x,n,p;
do
{ cout<<"Enter the value you want to insert and it's position\n";
cin>>x>>p;
insert(x,p);
    cout<<"Do you want to contine\n1-Yes\n0-No\n";
    cin>>n;
} while (n);
print(head);



}