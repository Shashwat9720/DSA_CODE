#include<bits/stdc++.h>

using namespace std;

class Stack
{ private:
 int top1;
 int top2;
 int size;
 int* arr;
 public:
 Stack(int x)
 {
    size=x;
    top1=-1;
    top2=size;
    arr=new int[size];
 }
 void push1(int x)
 {  if(top1+1==top2)
    {
        cout<<"Stack Overflow\n";
        return;
    }
    arr[++top1]=x;
    }
    void push2(int x)
 {  if(top1+1==top2)
    {
        cout<<"Stack Overflow\n";
        return;
    }
    arr[--top2]=x;
    }
int pop1()
{
    if(top1==-1)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return arr[top1--];
}
int pop2()
{
    if(top2==size)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return arr[top2++];
}
int peek1()
{
    if(top1==-1)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return arr[top1];
}
int peek2()
{
    if(top2==size)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return arr[top2];

}
bool isempty1()
{
    return (top1==-1);
}
bool isempty2()
{
    return (top2==size);
}

int stacksize1()
{
    return top1+1;
}
int stacksize2()
{
    return size-top2;
}


};

int main()
{
int n;
    cout<<"Enter the size of the stack\n";
cin>>n;
int ch;
Stack* s=new Stack(n);
 do
 {cout<<"What operation you want to perform on the stack\n1-Push in stack1\n2-Pop in stack1\n3-Peek in stack 1\n4-Is empty in stack1\n5-size of stack1\n6-Push in stack2\n7-Pop in stack2\n8-Peek in stack 2\n9-Is empty in stack2\n10-size of stack2\n0-Exit\n";
  cin>>ch;
  switch (ch)
  {
  case 1: cout<<"Enter the value you want to push\n";
  int x;
  cin>>x;
  s->push1(x);
      break;
  case 2: s->pop1();
  break;
  case 3: cout<<"The value at the top is "<<s->peek1()<<endl;
  break;
  case 4: if(s->isempty1())
  {
      cout<<"The stack is empty\n";
  }
  else
  {
      cout<<"The stack is not empty\n";
  }
  break;
  case 5:cout<<"Size of the stack is: "<<s->stacksize1()<<endl;
  break;
  case 6: cout<<"Enter the value you want to push\n";
  cin>>x;
  s->push2(x);
      break;
  case 7: s->pop2();
  break;
  case 8: cout<<"The value at the top is "<<s->peek2()<<endl;
  break;
  case 9: if(s->isempty2())
  {
      cout<<"The stack is empty\n";
  }
  else
  {
      cout<<"The stack is not empty\n";
  }
  break;
  case 10:cout<<"Size of the stack is: "<<s->stacksize2()<<endl;
  break;
  }


     /* code */
 } while (ch);



}