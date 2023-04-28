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
    return 0;
}
