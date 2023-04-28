#include <iostream>

using namespace std;

class Node
{ public:
    int data;
    Node* next;

};

Node* head=0;
void delete_beg()
{  
    Node* temp=head;
    head=head->next;
    delete temp;
  
}
int main()
{Node* New;
Node* temp;
head=0;
int n=1;
while(n)
{ New=new Node;
cout<<"Enter the value of the element\n";
cin>>New->data;
New->next=0;
if(head==0)
{
    head=temp=New;
}
else
{   temp->next=New;
    temp=New;
}
cout<<"Do you want to continue\n";
cin>>n;}
temp=head;
cout<<"The list so far is\n";
while(temp!=0)
{
    cout<<temp->data<<" ";
   temp=temp->next;
}
cout<<endl;
cout<<"Do you want to delete the element from the begining of the link lsit\n";
cin>>n;
while(n)
{cout<<"Deleting the element from the beginning\n";
delete_beg();
cout<<"Do you want to delete the element from the begining of the link lsit\n";

cin>>n;
}


temp=head;
while(temp!=0)
{
    cout<<temp->data<<" ";
   temp=temp->next;
}



    return 0;
}
