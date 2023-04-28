#include<bits/stdc++.h>

using namespace std;
class node
{  public:
     int data;
node* next;

};
node* head;
void reverse()
{
    stack<node*>s;
    node* temp=head;
    while(temp->next!=0)
    {
        s.push(temp);
        temp=temp->next;
    }
    head=temp;
    while(!s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=0;
    
}
void print()
{
    node* temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{ int n,x;
 head=0;
 node* temp;
do
  { cout<<"Enter the value to be inserted\n";
  cin>>x;
  node* New=new node;
  New->data=x;
  New->next=0;
    if(head==0)
    {
        temp=head=New;
        

    }
    else
    {
        temp->next=New;
        temp=New;
        
            }
    cout<<"Do you want to add additional elements to the list\n";
    cin>>n;

  }
  while (n);
  print();
  reverse();
  print();



}
