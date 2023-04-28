#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node* next;
};
node* head;
void print()
{
    node* temp=head;
    while(temp!=0)
    {  cout<<temp->data<<" ";
      temp=temp->next;

    }
}
int search(int n)
{ node* temp=head;
 while(temp!=0)
 { if(temp->data==n)
   {
       return 1;
   }
 temp=temp->next;

 }
 return 0;



}

int main()
{ node* temp;
  node* New;
  head=0;
  int n=1;
  while(n)
  {   New=new node;
      cout<<"Enter the data you want to add\n";
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
    cout<<"Do you want to continue\n1-Yes\n0-No\n";
    cin>>n;}
    print();
    cout<<endl;
    cout<<"Enter the element you want to search\n";
    cin>>n;
    if(search(n))
    {
        cout<<"Element is found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }

    return 0;
}
