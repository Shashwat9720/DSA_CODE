
#include <bits/stdc++.h>
using namespace std;

class node
{   public:
    int data;
    node* next;


};
node* head;
node* reverse(node* H)
{ node* prev;
  node* curr;
  node* next;
  prev=0;
  curr=next=H;
  while(next!=0)
  {   next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
  }
  head=prev;
    return head;

}
void print(node* H)
{ node* temp;
temp=H;
while(temp!=0)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}

int main() {

    node* temp;
    node* NEW;
    int n=1;
    head=0;
    while(n)
    {NEW=new node;
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
        cout<<"Do you want to add additional elements\n";
        cin>>n;

    }
    print(head);
    cout<<endl;
    head=reverse(head);
    print(head);



    return 0;
}
