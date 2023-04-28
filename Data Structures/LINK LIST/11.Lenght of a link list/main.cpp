#include <iostream>

using namespace std;

class node
{public:
    int data;
    node* next;

};

int main()
{ node* head;
 node* temp;
 node* New;
 int n,l;
 n=1;
 l=0;
 head=0;
 while(n)
 { New=new node;
 cout<<"Enter the value of the element\n";
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
 cout<<"Do you want to create additional elements\n 1-yes\n no-0\n";
 cin>>n;

 }
 temp=head;
 while(temp!=0)
 {
     l++;
     cout<<temp->data<<" ";
     temp=temp->next;
 }
 cout<<endl;
 cout<<"The length of the link list is "<<l;
    return 0;
}
