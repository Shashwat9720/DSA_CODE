#include<iostream>

using namespace std;

class priority_queue
{ public:
 int Q[100];
  int P[100];
  int front=-1;
  int rear=-1;
  void enqueue(int x,int p)
  {
      if(rear==100)
      {
          printf("Sorry the queue is full\n");
          return;
      }
      else if(front==-1&&rear==-1)
      {
          front++;
          rear++;
          Q[rear]=x;
          P[rear]=p;
      }
      else 
      {  int i;
          for(i=rear+1;i>front;i--)
          { if(P[i-1]<p)
            {
                P[i]=P[i-1];
                Q[i]=Q[i-1];
            }
            else 
            {
                P[i]=p;
                Q[i]=x;
                break;
            }

          }
          if(i==front)
          {P[i]=p;
                Q[i]=x;

          }
         
          
      }
      
  }
  int dequeue()
  {
      if(front==-1)
      {   printf("Sorry queue is empty\n");
          return -1;
      }
      else if(front==rear)
      {  int x=Q[front];
         front=rear=-1;
         return x;

      }
      else 
      {
          int x=Q[front];
          front++;
          return x;
      }
  }

};

int main()
{ int x,n,p;
priority_queue* PQ=new priority_queue();

do
{printf("What operation you want to perform\n1-Enqueue\n2-Dequeue\n0-Exit\n");
scanf("%d",&n);
switch (n)
{
case 1: printf("Enter the value and it's priority\n");
scanf("%d %d",&x,&p);
PQ->enqueue(x,p);
    break;
case 2: x=PQ->dequeue();
printf("Value dequeued is %d\n",x);
}
} while (n);




}