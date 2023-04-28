#include<bits/stdc++.h>

using namespace std;

class node
{ public:
    int data;
    node* next;
};
node* head;

void reverse()
{
    node* temp=head;
    stack<node*>s;
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
}


int main()
{ node* New;
node* temp;
int n;
do
{ New=new node;
  cout<<"Enter the data to be inserted\n";
  cin>>New->data;
  New->next=0;
  if(head==0)
  {
      head=temp=New;
  }
  else
  {
      temp->next=New;
      temp=New;
  }
  cout<<"Do you want to add additional elements\n";
  cin>>n;
}
 while (n);
 cout<<"The link list at this stage is:\n";
 print();
cout<<endl;
 reverse();
 cout<<"The link list after reversing is:\n";
print();



}