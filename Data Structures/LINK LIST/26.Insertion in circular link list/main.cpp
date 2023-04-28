#include <iostream>
#include<math.h>
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
void insert_at_beg(int x)
{
    node* temp=new node;
    temp->data=x;
    temp->next=tail->next;
    tail->next=temp;
}
int main()
{node* New;
node* temp;
tail=0;
int n=1;
while(n)
{New=new node;
cout<<"Enter the data\n";
cin>>New->data;
New->next=0;
if(tail==0)
{
    tail=temp=New;
    tail->next=New;
}
else
{     New->next=tail->next;
    tail->next=New;
    tail=New;
    }
cout<<"Do you want to continue?\npress 1 to continue and 0 to end task\n";
cin>>n;}
New->next=temp;
print();
cout<<"Do you want to add elements to your list\n1 to continue and 0 to end task\n";
cin>>n;
while(n)
{   cout<<"Enter the data you want to insert\n";
int x;
cin>>x;
    insert_at_beg(x);
    cout<<"Do you want to add elements to your list\n1 to continue and 0 to end task\n";
cin>>n;
    }
print();
    return 0;
}
