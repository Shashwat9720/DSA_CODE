#include <iostream>

using namespace std;

class node
{ public:
     int data;
     node* prev;
     node* next;

};
node* head;
node* tail;
void reverse()
{ node* curr;
  node* nxt;
  node* prev;
   curr=nxt=head;
   prev=tail;
   while(curr!=tail)
   { nxt=curr->next;
     curr->next=prev;
     curr->prev=nxt;
     prev=curr;
     curr=nxt;}
     nxt=curr->next;
     curr->next=prev;
     curr->prev=nxt;
     prev=curr;
     curr=nxt;

     curr=head;
     head=tail;
     tail=curr;

}
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

int main()
{node* New;
node* temp;
int n=1;
head=0;
while(n)
{New=new node;
cout<<"Enter the data to be added\n";
cin>>New->data;
New->prev=0;
New->next=0;
if(head==0)
{
    head=tail=New;
    head->next=head;
    head->prev=head;
}
else
{
    New->prev=tail;
    tail->next=New;
    New->next=head;
    head->prev=New;
    tail=New;
}
cout<<"Do you want to continue\n1-Yes\n0-No\n";
cin>>n;}
print();
reverse();
print();





    return 0;
}
