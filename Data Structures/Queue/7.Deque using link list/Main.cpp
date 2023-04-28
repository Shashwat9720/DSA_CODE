// { Driver Code Starts
#include <iostream>

using namespace std;

class node
{
  public:
  int data;
  node* next;
  node* prev;
  node(int x)
  {
    data=x;
    next=prev=NULL;
  }
};

class deque
{ private:
node* front;
node* rear;
public:
deque()
{
    front=rear=NULL;
}
void insertFront(int x)
{
    node* temp=new node(x);
    if(front==NULL)
    {
        front=rear=temp;
        return;
    }
   temp->next=front;
   front->prev=temp;
   front=temp;
}
void insertRear(int x)
{ 
     node* temp=new node(x);
    if(front==NULL)
    {
        front=rear=temp;
        return;
    }
   rear->next=temp;
   temp->prev=rear;
   rear=temp;
}
int deleteFront()
{
    if(front==NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    int x;
    x=front->data;
    if(front==rear)
    {    delete front;
        front=rear=NULL;
       return x;
    }
    node* temp=front;
    front=front->next;
    front->prev=NULL;
    delete temp;
    return x;
}
int deleteRear()
{
    if(front==NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    int x=rear->data;
     if(front==rear)
    {    delete front;
        front=rear=NULL;
       
       return x;
    }
     node* temp=rear;
     rear=rear->prev;
     rear->next=NULL;
     delete temp;
    return x;
}

int getFront()
{
   if(front==NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    return front->data;
}
int getRear()
{
      if(front==NULL)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    return rear->data;
}

};

int main()
{ 
    deque* q=new deque();
    int n;
do
{cout<<"What operation you want to perform\n1-Insert at the front\n2-Insert at the rear\n3-Delete from the front\n4-Delete from the rear\n0-Exit\n";
cin>>n;
switch (n)
{
case 1: cout<<"Enter the value you want to insert\n";
int x;
cin>>x;
q->insertFront(x);
    break;
    case 2: cout<<"Enter the value you want to insert\n";

cin>>x;
q->insertRear(x);
    break;
    case 3:  x=q->deleteFront();
    if(x!=-1)
    cout<<x<<endl;
    break;
     case 4:  x=q->deleteRear();
    if(x!=-1)
    cout<<x<<endl;
    break;
    case 5: x=q->getFront();
    if(x!=-1)
    cout<<x<<endl;
    break;
    case 6: x=q->getRear();
    if(x!=-1)
    cout<<x<<endl;
    break;


default:
    break;
}
} while (n);




}