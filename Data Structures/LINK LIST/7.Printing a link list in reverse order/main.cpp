#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;
};

node* head;
void reverse_print(node *H)
{
     if(H==0)
     return;
     reverse_print(H->next);
     cout<<H->data<<" ";
}
void print(node* H)
{
    if(H==0)
    return;
    cout<<H->data<<" ";
    print(H->next);


}

int main()
{ node* temp;
  node* NEW;
  int n=1;
  head=0;
  while(n)
  { NEW=new node;
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
      cout<<"Do you want to add additional elements to the link list\n";
      cin>>n;
  }
  print(head);
  cout<<endl;
  cout<<"Printing in reverse order\n";
 reverse_print(head);


    return 0;
}
