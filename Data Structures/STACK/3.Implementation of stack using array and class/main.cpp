#include<bits\stdc++.h>

using namespace std;

class Stack
{  private:
 int top;
 int size;
 vector<int>arr;
 public:
 Stack(int x)
 {
    size=x;
    top=-1;
 }

 void push(int x)
 {
    if(top==size-1)
    {
        cout<<"Stack Overflow\n";
        return;
    }
    top++;
    arr.push_back(x);
 }
 void pop()
 {
    if(top==-1)
    {
        cout<<"Stack Underflow\n";
        return;
    }
    top--;
 }
 int peek()
 {
    if(top==-1)
    {
        cout<<"Stack Underflow\n";
        return -1;
    }
    return arr[top];
 }

 bool isEmpty()
 {
    return (top==-1);
 }
 int stacksize()
 {
    return top+1;
 }


};

int main()
{  int n;
    cout<<"Enter the size of the stack\n";
cin>>n;
int ch;
Stack* s=new Stack(n);
 do
 {cout<<"What operation you want to perform on the stack\n1-Push\n2-Pop\n3-Peek\n4-Is empty\n0-Exit\n";
  cin>>ch;
  switch (ch)
  {
  case 1: cout<<"Enter the value you want to push\n";
  int x;
  cin>>x;
  s->push(x);
      break;
  case 2: s->pop();
  break;
  case 3: cout<<"The value at the top is "<<s->peek()<<endl;
  break;
  case 4: if(s->isEmpty())
  {
      cout<<"The stack is empty\n";
  }
  else
  {
      cout<<"The stack is not empty\n";
  }
  break;
  case 5:cout<<"Size of the stack is: "<<s->stacksize()<<endl;
  default:
      break;
  }


     /* code */
 } while (ch);
 


}