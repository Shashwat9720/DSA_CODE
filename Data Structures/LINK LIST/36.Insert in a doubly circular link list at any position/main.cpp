#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;
    node* prev;

};
node* head;
node* tail;
void print()
{
    node* temp=head;
    while(temp!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
insert_at_pos(int x,int pos)
{ node* New=new node;
  int i=1;
  node* temp=head;
  while(i<pos-1)
  {
      temp=temp->next;
      i++;
  }

  New->data=x;
  New->next=temp->next;
  New->prev=temp;
  temp->next->prev=New;
  temp->next=New;}

int main()
{node* New;
head=0;
int n=1;
while(n)
{  New=new node;
    cout<<"Enter the data\n";
    cin>>New->data;
    New->prev=0;
    New->next=0;
    if(head==0)
    {
        head=tail=New;
        head->next=head;
        tail->next=head;
        head->prev=tail;
        tail->prev=head;
    }
    else
    { tail->next=New;
     New->prev=tail;
     New->next=head;
     head->prev=New;
     tail=New;}
     cout<<"Press 1 to continue and 0 to exit\n";
     cin>>n;
}
print();
cout<<"Do you want to insert additional elements\n";
cin>>n;
while(n)
{ cout<<"Enter the data you want to insert and the position you want to insert it to\n";
 int x,pos;
 cin>>x>>pos;
 insert_at_pos(x,pos);
   cout<<"Do you want to insert additional elements\n";
cin>>n;
}
print();

    return 0;
}
