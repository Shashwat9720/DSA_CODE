#include<iostream> 

using namespace std;

class node
{ public:
  int data;
  int priority;
  node* next;

};

class priority_queue
{
    public:
    node* front=NULL;
    node* rear=NULL;
    void enqueue(int x,int p)
    {   node* curr=new node();
        curr->data=x;
        curr->priority=p;
        curr->next=NULL;
        if(front==NULL)
    {
        front=rear=curr;
    }
    else 
    {  if(curr->priority>front->priority)
     {
         curr->next=front;
         front=curr;
     }
     else 
        {node* temp=front;
          node* prev=NULL;
        while(temp!=NULL)
        {
            if(temp->priority>curr->priority)
            {   prev=temp;
                temp=temp->next;
            }
            else 
            {  prev->next=curr;
              curr->next=temp;

            }
        }
        if(temp==NULL)
        {   prev->next=curr;
           curr->next=NULL;
        }

    }
    }


    }
    int dequeue()
    {
        if(front==NULL)
        {
            printf("Sorry the queueu is empty\n");
            return -1;
        }
        if(front==rear)
        {
            node* temp=front;
            int x=temp->data;
            front=NULL;
            rear=NULL;
            free(temp);
            return x;
        }
        else 
        {
            node* temp=front;
            int x=temp->data;
            front=front->next;
            free(temp);
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