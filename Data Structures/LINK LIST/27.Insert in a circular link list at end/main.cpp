#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;

};

node* tail;

void print()
{
    node* temp;
    temp=tail->next;
    while(temp!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
     cout<<temp->data<<" ";
     cout<<endl;
}

void insert_at_end(int x)
{

     node* temp=new node;
     temp->data=x;
     temp->next=tail->next;
     tail->next=temp;
     tail=temp;



}

int main()
{ node* temp;
  node* New;
  tail=0;
  int n=1;
  while(n)
  {  New=new node;
      cout<<"Add data to the list\n";
      cin>>New->data;
      New->next=0;
      if(tail==0)
      {
          tail=temp=New;
          tail->next=New;
      }
      else
      {

          tail->next=New;
          tail=New;
      }
      cout<<"Do you want to continue\npress 1 to continue and 0 to end task\n";
      cin>>n;}
  New->next=temp;
    print();
    cout<<"Do you want to add additional elements\n";
    cin>>n;
    while(n)
    { cout<<"Add the data you want to add\n";
    int x;
    cin>>x;
        insert_at_end(x);
    cout<<"Do you want to add additional elements\n";
    cin>>n;
    }
    print();

    return 0;
}
