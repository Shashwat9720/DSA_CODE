#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
    
};

class queue
{  private:
  node*front=NULL;
  node* rear=NULL;
  public:
 void enqueue(int x)
 {
    node* temp=new node(x);
    if(rear==NULL)
    {
        front=rear=temp;
        rear->next=front;
    }
    else 
    {
        rear->next=temp;
        temp->next=front;
        rear=temp;
    }
 }
 int dequeue()
 {
    if(isEmpty())
    return -1;
    int x=front->data;
    if(front==rear)
    {
        delete front;
        front=rear=NULL;
        return x;
    }
    node* temp=front;
    front=front->next;
    rear->next=front;
    delete temp;
    return x;
 }
 bool isEmpty()
 {
    return (front==NULL);
 }
 int getFront()
{
    if(isEmpty())
    return -1;
    return front->data;
}
int getRear()
{
    if(isEmpty())
    return -1;
    return rear->data;
}


};

int main()
{
int x;
queue* q=new queue();
int ch;
do{
cout<<"What operation you want to perform on the queue\n1-Enqueue\n2-Dequeue\n3-Isempty\n4-Get front\n5-Get rear\n0-Exit\n";
cin>>ch;
switch (ch)
{
case 1: cout<<"Enter the value to be enqueued\n";
cin>>x;
q->enqueue(x);
    break;
case 2: x=q->dequeue();
if(x!=-1)
cout<<x<<endl;
break;
case 3: if(q->isEmpty())
cout<<"Queue is empty\n";
else 
cout<<"Queue is not empty\n";
break;
case 4: if(q->getFront()!=-1)
cout<<q->getFront()<<endl;
break;
case 5: if(q->getRear()!=-1)
cout<<q->getRear()<<endl;
default:
    break;
}
}
while(ch);
}