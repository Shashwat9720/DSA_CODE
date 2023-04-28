#include <iostream>

using namespace std;

class node
{public:
 int data;
 node* next;
 node* prev;
    };

node* head;
node* tail;
void print()
{
    node* temp;
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;}

        }
void insert(int pos)
{int i=1;
node* temp;
node* New;
New=new node;
cout<<"Enter the data you want to insert\n";
cin>>New->data;
New->prev=0;
New->next=0;
temp=head;
while(i<pos-1)
{
    temp=temp->next;
    i++;}
    New->prev=temp;
    New->next=temp->next;
    temp->next=New;
    New->next->prev=New;}
int main()
{node* New;
node* temp;
head=0;
int n=1;
while(n)
{New=new node;
cout<<"Enter the data you want to add\n";
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
    temp=New;
    tail=temp;
}

    cout<<"Do you want to insert additional elements to the link list\n";
    cin>>n;}
      print();
     cout<<endl;
     cout<<"Do you want to insert additional elements to the link list\n";
     cin>>n;


     while(n)
     { int pos;
         cout<<"At what position do you wish to insert the element\n";
         cin>>pos;

         insert(pos);
         cout<<"Do you want to insert additional elements to the link list\n";
     cin>>n;

     }
     print();



    return 0;
}
