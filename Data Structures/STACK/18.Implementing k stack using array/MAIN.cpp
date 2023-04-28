#include<bits/stdc++.h>

using namespace std;

class stacks
{ int* arr;
  int* top;
  int* next;
  int head;
  public:
  stacks(int n,int k)
  {
    arr=new int[n];
    next=new int[n];
    top=new int[k];
    head=0;
    for(int i=0;i<k;i++)
    top[i]=-1;
    for(int i=0;i<n-1;i++)
    next[i]=i+1;
    next[n-1]=-1;
  }
  void push(int x,int k)
  {

    if(head==-1)
    {
        cout<<"Stack overflow\n";
        return;
    }
    int i=top[k];
    top[k]=head;
    head=next[head];
    next[top[k]]=i;
    arr[top[k]]=x;
  }
  int pop(int k)
  { if(top[k]==-1)
  {
    cout<<"Stack Underflow\n";
    return -1;
  }
  int i=head;
  head=top[k];
  top[k]=next[top[k]];
  next[head]=i;
  return arr[head];}
  
  int top_elem(int k)
  {
    if(top[k]==-1)
  {
    cout<<"Stack Underflow\n";
    return -1;
  }
  return arr[top[k]];
  }
  bool isEmpty(int k)
  {
    return (top[k]==-1);
  }

};


int main()
{ cout<<"Enter the size of thea array and the number of stacks you want to implement\n";
int n,k;
cin>>n>>k;
stacks* s=new stacks(n,k);
int x;
do
{ cout<<"What operation you want to perform\n1-Push\n2-Pop\n3-Top\n4-Ismepty\n0-Exit\n";
 cin>>x;
 switch (x)
 {
 case 1: cout<<"Enter the value you want to insert and the stack number you want to insert this value to\n";
  cin>>n>>k;
  s->push(n,k);
    break;
 case 2: cout<<"Enter the stack from which you want to pop\n";
 cin>>k;
 cout<<s->pop(k)<<endl;
 break;
 case 3:cout<<"Enter the stack from whose top you want\n";
 cin>>k;
 cout<<s->top_elem(k)<<endl;
 break;
 case 4:cout<<"Enter the stack with regards to which you want to check vaccancy\n";
 cin>>k;
 if(s->isEmpty(k))
 cout<<"The stack is empty\n";
 else 
 cout<<"Stack is not empty\n";
 default:
    break;
 }
} while (x);




}