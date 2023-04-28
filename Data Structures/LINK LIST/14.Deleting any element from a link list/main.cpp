#include <iostream>

using namespace std;

class Node
{ public:
    int data;
    Node* next;

};

Node* head;

int main()
{Node* New;
Node* temp;
Node* prev;
head=0;
int n=1;
int l,i,pos;
l=0;
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
   l++;
}
cout<<endl;
cout<<"Enter the position of the element you want to delete\n";
cin>>pos;
if(pos<l)
{
    temp=head;

    if(pos==1)
    {
        head=temp->next;
        delete temp;
    }
    else
    {
        i=1;
        while(i<pos)
        {   prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        delete temp;
        


    }

}
temp=head;
while(temp!=0)
{
    cout<<temp->data<<" ";
   temp=temp->next;

}
return 0;}
