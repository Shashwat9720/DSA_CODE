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
    node* temp=tail->next;
    while(temp!=tail)
    {
        cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}
void insert_at_pos(int x,int pos)
{

    node* temp=tail->next;
    int i=1;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;}
        node* New=new node;
        New->data=x;
        New->next=temp->next;
        temp->next=New;}


int main()
{ node* New;
  node* temp;
  int n=1;
  tail=0;
  while(n)
  {   New=new node;
      cout<<"Add the data to the list\n";
      cin>>New->data;
      New->next=0;
      if(tail==0)
      {
          tail=temp=New;
      }
      else
      {
          tail->next=New;
          tail=New;
      }
      cout<<"Do you want to continue\n";
      cin>>n;

  }
  tail->next=temp;
  print();
  cout<<"Do you want to add additional elements\n";
  cin>>n;
  int x,pos;
  while(n)
  {cout<<"Add the position and data you want to insert\n";
  cin>>pos>>x;
  insert_at_pos(x,pos);
   cout<<"Do you want to add additional elements\n";
  cin>>n;
  }
   print();

    return 0;
}
