#include<iostream>

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
    {
        node* temp=new node(x);
        if(pos==1)
        {
            temp->next=head;
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
        curr->next=temp;
        return head;

    }
    node* remove(node* head,int pos)
    {  if(head==NULL)
        return head;
        if(pos==1)
        {
            node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int i=1;
        node* curr=head;
        node* prev=NULL;
        while(curr!=NULL&&i<pos)
        {   prev=curr;
            curr=curr->next;
            i++;
        }
        if(curr==NULL)
        return head;
        prev->next=curr->next;
        delete curr;
        return head;
    }
    void traverse(node* head)
    {  
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    node* reverse(node* head)
    {
       node* curr=head;
       node* prev=NULL;
       while(curr!=NULL)
       {
        node* Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
       }
       return prev;
    }
};

int main()
{   int n;
node* head=NULL;
    do
    { cout<<"What operation you want to perform\n1-Insert\n2-Delete\n3-Traverse\n4-Reverse\n0-Exit\n";
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
        case 4: head=head->reverse(head);
       }
    } while (n);
   
    
}