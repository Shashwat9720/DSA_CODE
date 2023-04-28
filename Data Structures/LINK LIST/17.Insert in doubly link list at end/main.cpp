#include <iostream>

using namespace std;

class node
{public:
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
void insert_at_end()
{ node* New;
New=new node;
cout<<"Enter the value you want to insert\n";
cin>>New->data;
New->prev=0;
New->next=0;
New->prev=tail;
tail->next=New;
tail=New;


}


int main()
{node* temp;
node*New;
head=0;
int n=1;
while(n)
{New=new node;
cout<<"Enter the data you want to insert in the link list\n";
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
    cout<<"Do you want to add additional elements to the link list\n1-Yes\n0-No\n";
    cin>>n;}
    print();
    cout<<endl;
    cout<<"Do you want to insert additional elements to the link list\n1-Yes\n0-No\n";
    cin>>n;
    while(n)
    {
        insert_at_end();
        cout<<"Do you want to insert additional elements to the link list\n1-Yes\n0-No\n";
    cin>>n;
    }
    print();

    return 0;
}
