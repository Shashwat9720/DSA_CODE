#include<bits/stdc++.h>

using namespace std;

class node
{ private:
int data;
node* next;
node* prev;
public:
node(int x)
{
    data=x;
    prev=NULL;
    next=NULL;
}
node* insert(node* head,int x,int pos)
{    node* temp=new node(x);
   if(head==NULL&&pos!=1)
   return head;
    if(head==NULL&&pos==1)
  {  temp->next=temp;
     temp->prev=temp;
    return temp;
 
  }
  else if(head!=NULL&&pos==1)
  {
    temp->prev=head->prev;
    head->prev->next=temp;
    head->prev=temp;
    temp->next=head;
    return temp;
  }
  int i=1;
  node* curr=head;
  while(curr->next!=head&&i<pos-1)
  {
    curr=curr->next;
    i++;
  }
  if(curr->next==head&&i!=pos-1)
  return head;
  temp->next=curr->next;
  curr->next->prev=temp;
  temp->prev=curr;
  curr->next=temp;
  return head;
}

node* remove(node* head,int pos)
{ 
    if(head==NULL)
    return head;
    if(head->next==head&&pos==1)
      {
        delete head;
        return NULL;
      }
      else if(pos==1)
      {
        node* temp=head;
        head->next->prev=head->prev;
        head->prev->next=head->next;
        head=head->next;
        delete temp;
        return head;
      }
    node* curr=head;
    int i=1;
    while(curr->next!=head&&i<pos)
    {
        curr=curr->next;
        i++;
    }
    if(curr->next==head&&i!=pos)
    return head;
    curr->next->prev=curr->prev;
    curr->prev->next=curr->next;
    delete curr;
    return head;

}
void traverse(node* head)
{
    if(head==NULL)
    return;
    node* curr=head;
    do
    { cout<<curr->data<<" ";
      curr=curr->next;

    }
    while(curr!=head);
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