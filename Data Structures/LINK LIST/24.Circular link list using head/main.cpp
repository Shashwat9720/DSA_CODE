#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;
};
node* head;

void print()
{
    node* temp;
    temp=head;
    while(temp->next!=head)
    {


        cout<<temp->data<<" ";
        temp=temp->next;
    }
      cout<<temp->data<<" ";

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
    if(head==0)
    {
        head=temp=New;
    }
    else
    {
        temp->next=New;
        temp=New;
    }
    cout<<"Press 1 to continue and 0 to finish the list\n";
    cin>>n;
}
temp->next=head;
print();

    return 0;
}
