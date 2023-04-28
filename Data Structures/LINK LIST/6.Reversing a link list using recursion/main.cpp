#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;
};
node* head;

node* reverse(node* H)
{   
     if(H->next==0)
     return H;
     node* temp=reverse(H->next);
     H->next->next=H;
    H->next=0;
     return temp;

   


}
void print(node* H)
{
    node* temp;
    temp=H;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{ node* temp;
node* NEW;
node* curr;
node* prev;
node* next;
head=0;
int n=1;
while(n)
{
    NEW=new node;
    cout<<"Enter the data\n";
    cin>>NEW->data;
    NEW->next=0;
    if(head==0)
    {
        head=temp=NEW;
    }
    else
    {
        temp->next=NEW;
        temp=NEW;
    }
    cout<<"Do you want to continue\n";
    cin>>n;
}
print(head);
cout<<endl;
cout<<"Reversing the list\n";
next=curr=head;
prev=0;
head=reverse(head);
print(head);
    return 0;
}
