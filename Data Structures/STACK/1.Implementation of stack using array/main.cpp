#include <iostream>

using namespace std;
int top=-1;
int N;

void push(int stack[])
{   int x;
    
    if(top==N-1)
    {
        cout<<"Stack overflow\n";
    }
    else
    {  cout<<"Enter the element you want to push to the stack\n";
    cin>>x;
        top++;
        stack[top]=x;
    }
   
}
void pop(int stack[])
{  if(top<0)
  {
      cout<<"Stack Underflow\n";
  }
  else
    {top--;}

}
void peek(int stack[])
{
    cout<<"The element at the top is "<<stack[top]<<endl;
}
void display(int stack[])
{
    int i=top;
    while(i>=0)
    {
        cout<<stack[i]<<endl;
        i--;
    }
}

int main()
{   
 cout<<"Enter the size of the stack\n";
 cin>>N;
 int stack[N];
int ch;
do
{ cout<<"What operation you want to perform\n1-push\n2-pop\n3-peek\n4-display\n0-end\n";
cin>>ch;
switch(ch)
{ case 1: push(stack);
   break;
  case 2: pop(stack);
  break;
  case 3: peek(stack);
  break;
  case 4:display(stack);
break;
default:cout<<"Invalid operation\n";
}
}
while(ch!=0);
   
    return 0;
}

