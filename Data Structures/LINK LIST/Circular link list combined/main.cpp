#include<bits/stdc++.h>

using namespace std;

class node 
{ 
    private:
    int data;
    node* next;
    public:
    node(int x)
    {
        data=x;
        next=NULL;
    }
    node* insert(node* head,int x,int pos)
    {  node* temp=new node(x);
       if(pos==1&&head==NULL)
       {
        temp->next=temp;
        return temp;
       }
        if(pos==1&&head!=NULL)
        {
          temp->next=head->next;
        head->next=temp;          
        swap(head->data,temp->data);
        return head;

        }
        int i=1;
        node* curr=head;
        while(curr->next!=head&&i<pos-1)
        {
            curr=curr->next;
            i++;
        }
        if(curr->next==head&&i+1!=pos)
        return head;
        temp->next=curr->next;
        curr->next=temp;
        return head;
    }

  node* remove(node* head,int pos)
 {
    if(head==NULL)
    return head;
    if(pos==1&&head->next==head)
      {
        delete head;
        return  NULL;
      }
      else if(pos==1&&head->next!=head)
      {
        node* temp=head->next;
        head->data=temp->data;
        head->next=temp->next;
        delete temp;
        return head;
      }
    node* curr=head;
    node* prev=NULL;
    int i=1;
    do
    { prev=curr;
    curr=curr->next;
     i++;
    }
    while(curr->next!=head&&i<pos);
    if(curr->next==head&&i!=pos)
    return head;
    prev->next=curr->next;
    delete curr;
    return head;
     
 }
 void traverse(node* head)
 {
    node* curr=head;
    if(curr==NULL)
    return;
    do
    { cout<<curr->data<<" ";
    curr=curr->next;
    } while (curr!=head);
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