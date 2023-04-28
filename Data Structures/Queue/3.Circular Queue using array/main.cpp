#include<iostream>

using namespace std;

class queue
{
    private:
    int front;
    int rear;
    int* arr;
    int size;
    public:
    queue(int x)
    {
        size=x;
        front=rear=-1;
        arr=new int[x];
    }
   void enqueue(int x)
   {
       if((rear+1)%size==front)
       {  cout<<"Queue is full\n";
          return; }
      if(front==-1)
      {
        front++;
        rear++;
        arr[rear]=x;
        return;
      }
      rear=(1+rear)%size;
      arr[rear]=x;}
    
    int dequeue()
    {
        if(front==-1)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        if(front==rear)
        {
            int x=arr[front];
            front=-1;
            rear=-1;
            return x;
        }
        int x=arr[front];
        front=(front+1)%size;
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
    bool isEmpty()
    {
        return (front==-1);
    }
    bool isFull()
    {
        return ((rear+1)%size==front);
    }
    int Size()
   {
    if(front<=rear)
    return rear-front+1;
    return size+rear-front+1;
   }

   

};

int main()
{ cout<<"Enter the size of  the queue\n";
int x;
cin>>x;
queue* q=new queue(x);
int ch;
do{
cout<<"What operation you want to perform on the queue\n1-Enqueue\n2-Dequeue\n3-Get size\n4-Isempty\n5-Isfull\n6-Get front\n7-Get rear\n0-Exit\n";
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
case 3: cout<<"Size of the queue is:"<<q->Size()<<endl;
break;
case 4: if(q->isEmpty())
cout<<"Queue is empty\n";
else 
cout<<"Queue is not empty\n";
break;
case 5:if(q->isFull())
cout<<"Queue is full\n";
else 
cout<<"Queue is not full\n";
break;
case 6: if(q->getFront()!=-1)
cout<<q->getFront()<<endl;
break;
case 7: if(q->getRear()!=-1)
cout<<q->getRear()<<endl;
default:
    break;
}
}
while(ch);



}