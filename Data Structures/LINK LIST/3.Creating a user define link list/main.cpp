#include <iostream>

using namespace std;

class node
{   public:
    int data;
    node* next;
};
int main()
{ node* head;
  node* temp;
  node* current;
  head=0;
  int n;
  n=1;
  while(n!=0)
  { current=new node;
    cout<<"Enter the value of the element\n";
    cin>>current->data;
    current->next=0;
    if(head==0)
    {
        head=temp=current;
    }
    else
    {
        temp->next=current;
        temp=current;
    }
    cout<<"Do you want to add additional elements\n1-yes\n0-no\n";
    cin>>n;

  }
  temp=head;
  while(temp!=0)
  {
      cout<<temp->data<<" ";
      temp=temp->next;
  }

    return 0;
}
