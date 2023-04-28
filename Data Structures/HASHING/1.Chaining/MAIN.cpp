#include<bits/stdc++.h>

using namespace std;

class node 
{
    public:
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

class link_list
{
    public:
    node* head=NULL;

    void insert(int x)
    {
        node* temp=head;
        if(head==NULL)
        {
            head=new node(x);
            return;
        }
         while(temp->next!=NULL)
        temp=temp->next;
        node* NEW=new node(x);
        temp->next=NEW;
        
        
    }
    void delete_node(int x)
    {
        node* temp=head;
        if(head->data==x)
        {
             head=head->next;
             delete temp;
             return;
        }
        node* prev=NULL;
        while(temp->data!=x)
         {
             prev=temp;
             temp=temp->next;
         }
         prev->next=temp->next;
         delete temp;


    }
    void traverse()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    bool search(int x)
    {
        node* temp=head;
        while(temp!=NULL)
         {
             if(temp->data==x)
             return 1;
             temp=temp->next;
         }
         return 0;

    }

};

int main()
{ cout<<"Enter the number of keys\n";
 int n;
 cin>>n;
 link_list* chain=new link_list[7];
 cout<<"Enter the keys\n";
 for(int i=0;i<n;i++)
 { 
     int x;
     cin>>x;
     chain[x%7].insert(x);


 }
 for(int i=0;i<7;i++)
{chain[i].traverse();
 cout<<endl;
}
int x=1;
do
{
      cout<<"Enter the value to be retrieved\n";
    int k;
    cin>>k;
    bool flag=chain[k%7].search(k);
    if(flag)
    cout<<"Element found\n";
    else 
    cout<<"Element not found\n";
    cout<<"Do you wish to continue\n";
    cin>>x;
} while (x);


}