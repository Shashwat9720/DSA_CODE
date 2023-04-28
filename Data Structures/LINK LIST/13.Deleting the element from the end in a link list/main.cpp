#include <iostream>

using namespace std;

class node
{ public:
    int data;
    node* next;

};
node* head;

int main()
{node* temp;
node* New;
node* prev;
int n=1;
head=0;
while(n)
{New=new node;
cout<<"Enter the value of the element\n";
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
cout<<"Do you want to continue\n";
cin>>n;

}
temp=head;
cout<<"The list right now\n";
while(temp!=0)
{   cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
temp=head;
cout<<"Deleting the element from the end\n";
while(temp->next!=0)
{
    prev=temp;
    temp=temp->next;
}
prev->next=temp->next;
delete temp;
temp=head;
while(temp!=0)
{   cout<<temp->data<<" ";
    temp=temp->next;
}
    return 0;
}
