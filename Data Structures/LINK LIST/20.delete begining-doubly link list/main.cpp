#include <iostream>

using namespace std;

class node
{   public:
    int data;
    node* next;
    node* prev;
};
node* head;
node* tail;

void print()
{ node* temp;
temp=head;
while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void delete_at_beg()
{ node* temp;
  temp=head;
  head->next->prev=0;
  head=head->next;
  temp->next=0;
  delete temp;}
int main()
{ node* New;
  node* temp;
  head=0;
  int n=1;
  while(n)
  {New=new node;
   cout<<"Enter the data you want to enter\n";
   cin>>New->data;
   New->next=0;
   New->prev=0;
   if(head==0)
   {
       head=temp=tail=New;
   }
   else
   {
       temp->next=New;
       New->prev=temp;
       temp=temp->next;
       tail=temp;
   }
   cout<<"Do you want to insert additional elements to the list\n";
   cin>>n;

  }
  print();
  cout<<endl;
  cout<<"Do you want to delete elements from the link list\n";
  cin>>n;
  while(n)
  {
      delete_at_beg();

   print();
     cout<<endl;
      cout<<"Do you want to delete elements from the link list\n";
  cin>>n;

  }




    return 0;
}
