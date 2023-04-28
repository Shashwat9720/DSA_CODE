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
void del_at_end()
{node* temp=tail->next;
    node* prev;
    while(temp!=tail)
    {  prev=temp;
        temp=temp->next;

    }
    prev->next=temp->next;
    tail=prev;
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
    del_at_end();
    print();


    return 0;
}
