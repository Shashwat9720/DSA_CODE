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
    node* temp;
    temp=tail->next;
    while(temp->next!=tail->next)
    {


        cout<<temp->data<<" ";
        temp=temp->next;
    }
      cout<<temp->data<<" ";

}

int main()
{node* New;
node* temp;
tail=0;
int n=1;
while(n)
{
    New=new node;
    cout<<"Please enter the data\n";
    cin>>New->data;
    New->next=0;
    if(tail==0)
    {
        tail=New;
        tail->next=New;
    }
    else
    {   New->next=tail->next;
        tail->next=New;
        tail=New;
    }
    cout<<"Press 1 to continue and 0 to finish the list\n";
    cin>>n;
}
print();

    return 0;
}
