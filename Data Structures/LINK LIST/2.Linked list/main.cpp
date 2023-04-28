#include <iostream>

using namespace std;
class Node
{public:
    int data;
    Node* next;

};
void print(Node* n)
{
    while(n!=0)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main()
{Node* head=NULL;
Node* first=NULL;
Node* second=NULL;
Node* third=NULL;
first=new Node;
second=new Node;
third=new Node;
head=first;
cout<<"Enter the elements value\n";
cin>>first->data;
first->next=second;
cout<<"Enter the elements value\n";
cin>>second->data;
second->next=third;
cout<<"Enter the elements value\n";
cin>>third->data;
third->next=NULL;
print(head);





    return 0;}

