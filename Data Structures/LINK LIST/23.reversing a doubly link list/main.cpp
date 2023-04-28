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
    node* temp;
    temp=head;
    while(temp!=0)
    {


        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void reverse()
{
    node* curr;
    node* nxt;
    curr=head;
    while(curr!=0)
    {
        nxt=curr->next;
        curr->next=curr->prev;
        curr->prev=nxt;
        curr=nxt;
    }
    curr=head;
    head=tail;
    tail=curr;
}

int main()
{node* New;
node* temp;
head=0;
int n=1;
while(n)
{
    New=new node;
    cout<<"Please enter the data\n";
    cin>>New->data;
    New->next=0;
    New->prev=0;
    if(head==0)
    {
        head=tail=temp=New;
    }
    else
    {
        temp->next=New;
        New->prev=temp;
        temp=New;
        tail=temp;
    }
    cout<<"Press 1 to continue and 0 to finish the list\n";
    cin>>n;
}
print();
reverse();
cout<<endl;
print();
    return 0;
}
