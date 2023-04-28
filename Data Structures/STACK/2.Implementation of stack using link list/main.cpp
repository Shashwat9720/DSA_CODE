#include<iostream>

using namespace std;

class node
{ public:
  int data;
  node* next;

};
node* top=0;
void push()
{ int x;
    cout<<"Enter the element you want to push\n";
cin>>x;
node* New=new node;
New->data=x;
New->next=top;
top=New;
}

void pop()
{  if(top==0)
 {
     cout<<"Stack underflow\n";
 }
    else 
    {node* temp=top;
 top=top->next;
 delete temp;}
}
 void peek()
 {  
 if(top==0)
 {
     cout<<"Stack underflow\n";
 }
 else
      {cout<<"The element at the top is:"<<top->data<<endl;}
 }
 void display()
 {
     node* temp=top;
     while(temp!=0)
     {
         cout<<temp->data<<endl;
         temp=temp->next;
     }
 }

 int main()
 { int ch;
 do
 {  cout<<"What operation you want to perform. 1 for push.2 for pop. 3 for peek. 0 to exit and any other key to diplay\n";
 cin>>ch;
 switch (ch)
 { case 1:push();
  break;
  case 2:pop();
  break;
  case 3:peek();
  break;
  default: display(); }
 }
 
     /* code */
  while (ch!=0);
 


 }