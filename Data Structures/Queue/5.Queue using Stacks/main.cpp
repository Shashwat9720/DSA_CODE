#include<bits\stdc++.h>

using namespace std;

class Queue
{  private:
    stack<int>s1;
  stack<int>s2;
  public:
  void enqueue(int x)
  {  s1.push(x);

  }
  void dequeue()
  {
      if(s1.empty())
      {
          cout<<"The queue is empty\n";
      }
      else
      {while(!s1.empty())
      {
          s2.push(s1.top());
          s1.pop();
      }
      s2.pop();
      while(!s2.empty())
      {
          s1.push(s2.top());
          s2.pop();
      }}
  }
  int peek()
  {   if(s1.empty())
  {
      return -1;
  }
      while(!s1.empty())
      {
          s2.push(s1.top());
          s1.pop();
      }
      int x=s2.top();
      while(!s2.empty())
      {
          s1.push(s2.top());
          s2.pop();
      }
      return x;
  }
  bool Isempty()
  {
      return s1.empty();
  }
};

int main()
{ Queue Cq;
int n,x;
cout<<"What operation you want to perfrom on circular Queue\n1-Enqueue\n2-Dequeue\n3-Peek\n4-Isempty\n\0-Exit\n";
cin>>n;
do
{
    switch(n)
    {
        case 1:cout<<"Enter the number to be enqueued\n";
        cin>>x;
        Cq.enqueue(x);
        break;
        case 2:Cq.dequeue();
        break;
        case 3:x=Cq.peek();
        if(x==-1)
        {
            cout<<"The Queue is empty\n";
        }
        else
        {cout<<"The value at the front of the queue is:"<<x<<endl;}
        break;
        case 4: if(Cq.Isempty())
        {
            cout<<"The Queue is empty\n";

        }
        else
        {
            cout<<"The Queue is not empty\n";
        }
        break;

    }
cout<<"What operation you want to perfrom on circular Queue\n1-Enqueue\n2-Dequeue\n3-Peek\n4-Isempty\n\0-Exit\n";
cin>>n;
}
while(n);

}