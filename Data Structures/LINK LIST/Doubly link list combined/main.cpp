#include<iostream>

using namespace std;

class node 
{ private:
int data;
node* prev;
node* next;
public:
node(int x)
{
    data=x;
    prev=NULL;
    next=NULL;
}
node* insert(node* head,int x,int pos)
{   node* temp=new node(x);
    if(pos==1)
    { temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    return temp;
    }
    int i=1;
    node* curr=head;
    while(curr!=NULL&&i<pos-1)
    {
        curr=curr->next;
        i++;
    }
    if(curr==NULL)
    return head;
    temp->next=curr->next;
    if(curr->next!=NULL)
    curr->next->prev=temp;
    curr->next=temp;
    temp->prev=curr;
    return head;
}

node* remove(node* head,int pos)
{   if(head==NULL)
    return head;
    if(pos==1)
    {
        node* temp=head;
        head=head->next;
        if(head!=NULL)
        head->prev=NULL;
        delete temp;
        return head;
    }
    node* curr=head;
    int i=1;
    while(curr!=NULL&&i<pos)
    {
        curr=curr->next;
        i++;
    }
    if(curr==NULL)
    return head;
    if(curr->next!=NULL)
    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;
    delete curr;
    return head;
}
void traverse(node* head)
{
    node* curr=head;
    while(curr!=NULL)
{
  cout<<curr->data<<" ";
  curr=curr->next;

}
cout<<endl;
}


};
int main()
{   int n;
node* head=NULL;
    do
    { cout<<"What operation you want to perform\n1-Insert\n2-Delete\n3-Traverse\n0-Exit\n";
       cin>>n;
       switch (n)
       {
       case 1:cout<<"Enter the data and position you want to insert\n";
       int x,pos;
       cin>>x>>pos;
         head=head->insert(head,x,pos);
        break;
        case 2:cout<<"Enter the position you want to delete\n";
        cin>>pos;
        head=head->remove(head,pos);
       break;
       case 3:head->traverse(head);
        break;
       }
    } while (n);
   
    
}