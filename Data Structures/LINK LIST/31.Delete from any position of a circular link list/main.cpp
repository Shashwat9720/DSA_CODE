#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;
};

node* tail;

void print()
{
    node* temp=tail->next;
    while(temp!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<"\n";
    }
void del_at_pos(int pos)
{node* temp=tail->next;
    node* prev;
    int i=1;
    while(i<pos)
    {  prev=temp;
        temp=temp->next;
        i++;}
    prev->next=temp->next;
    temp->next=0;
    delete temp;
    }
int main()
{ node *temp;
node* New;
tail=0;
int n=1;
while(n)
{ New=new node;
    cout<<"Add the data you want to insert\n";
    cin>>New->data;
    New->next=0;
    if(tail==0)
    {
        tail=temp=New;
    }
    else
    {
        tail->next=New;
        tail=New;
    }
    cout<<"Do you want to continue?\npress 1 to continue and 0 to exit\n";
    cin>>n;}
    tail->next=temp;
    print();
    cout<<"Do you want to delete element from the link list\n";
    cin>>n;
    while(n)
    { int pos;
    cout<<"Enter the position from where you want to delete the element\n";
    cin>>pos;
        del_at_pos(pos);
        cout<<"Do you want to delete element from the link list\n";
    cin>>n;}
    print();


    return 0;
}
