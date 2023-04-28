#include <bits/stdc++.h>

using namespace std;

class node
{  public:
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
void insert_at_beg()
{ node* New;
  New=new node;
  cout<<"Enter the value you want to insert\n";
  cin>>New->data;
  New->next=0;
  New->prev=0;
  New->next=head;
  head->prev=New;
  head=New;




}

int main() {
 node* New;
 node* temp;
 head=0;
 int n=1;
 while(n)
 { New=new node;
   cout<<"Enter the data you want to add to the link list\n";
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
        cout<<"Do you want to add additional elements to the list\n1-Yes\n0-No\n";
        cin>>n;
        }
        print();
        cout<<endl;
        cout<<"Do you want to insert any additional elements to the list\n";
        cin>>n;
        while(n)
        {
            insert_at_beg();
            cout<<"Do you want to insert any additional elements to the list\n";
            cin>>n;

        }
        print();


}


