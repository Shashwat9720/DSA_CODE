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
void insert_at_beg(int x)
{ node* New=new node;
  New->data=x;
  New->next=head;
  New->prev=tail;
  tail->next=New;
  head->prev=New;
  head=New;}

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
{ cout<<"Enter the data you want to insert\n";
 int x;
 cin>>x;
 insert_at_beg(x);
   cout<<"Do you want to insert additional elements\n";
cin>>n;
}
print();

    return 0;
}
