// { Driver Code Starts
#include <iostream>

using namespace std;

class deque
{ private:
int* arr;
int size;
int front;
int rear;
public:
deque(int n)
{
    front=rear=-1;
    size=n;
    arr=new int[n];
}
void insertFront(int x)
{
    if((rear+1)%size==front)
    {
        cout<<"Queue is full\n";
        return;
    }
    if(front==-1)
    {
        front=rear=0;
        arr[rear]=x;
        return;
    }
    if(front==0)
    front=size-1;
    else 
    front--;
    arr[front]=x;
}
void insertRear(int x)
{ 
     if((rear+1)%size==front)
    {
        cout<<"Queue is full\n";
        return;
    }
    if(front==rear==-1)
    {
        front=rear=0;
        arr[rear]=x;
        return;
    }
    rear=(rear+1)%size;
    arr[rear]=x;
}
int deleteFront()
{
    if(front==-1)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    int x;
    if(front==rear)
    {
        x=arr[rear];
        rear=front=-1;
    }
    else 
    {
        x=arr[front];
        front=(front+1)%size;
    }
    return x;
}
int deleteRear()
{
    if(front==-1)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    int x;
   
    if(front==rear)
    {
        x=arr[rear];
        rear=front=-1;
    }
    else 
    {   x=arr[rear];
        if(rear==0)
        rear=size-1;
        else 
        rear--;
    }
    return x;
}

int getFront()
{
     if(front==-1)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    return arr[front];
}
int getRear()
{
    if(front==-1)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    return arr[rear];
}

};

int main()
{  int n;
cout<<"Enter the size of the deque\n";
cin>>n;
    deque* q=new deque(n);
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