#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node* prev;
    node* next;
};
node* head;
void print(node* H)
{
    node* temp;
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{node* temp;
node* NEW;
int n=1;
head=0;
while(n)
{NEW=new node;
cout<<"Enter the data\n";
cin>>NEW->data;
NEW->prev=0;
NEW->next=0;
if(head==0)
{
    head=temp=NEW;
}
else
{
    temp->next=NEW;
    NEW->prev=temp;
    temp=NEW;
}
cout<<"Do you wish to continue the list?\n";
cin>>n;

}
print(head);
    return 0;
}
