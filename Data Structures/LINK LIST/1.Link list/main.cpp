#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
head=new Node;
first=new Node;
second=new Node;
cout<<"Enter the elements value\n";
cin>>head->data;
head->next=first;
cout<<"Enter the elements value\n";
cin>>first->data;
first->next=second;
cout<<"Enter the elements value\n";
cin>>second->data;
second->next=NULL;
print(head);





    return 0;}
