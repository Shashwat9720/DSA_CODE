#include<iostream>

using namespace std;

class node
{    public:
     int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};


class stack
{ private:
node* top=NULL;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int x)
    {
        node* temp=new node(x);
        if(top==NULL)
        {
            top=temp;
            return;
        }
        temp->next=top;
        top=temp;
    }
    int pop()
    {
        if(top==NULL)
       { cout<<"Stack Underflow\n";
         return -1;
       }
      int x=top->data;
      node* temp=top;
      top=top->next;
      delete temp;
      return x;
    }
    int peek()
    {
        if(top==NULL)
       { cout<<"Stack Underflow\n";
         return -1;
       }
       return top->data;
    }
    bool isEmpty()
    {
        return (top==NULL);
    }
};

int main()
{int ch;
 stack* s=new stack;

do
{ cout<<"What operation you want to perform?\n1-Push\n2-Pop\n3-Peek\n4-Isempty\n";
cin>>ch;
switch (ch)
{
case 1:cout<<"Enter the value to be pushed\n";
int x;
cin>>x;
s->push(x);
    break;
    case 2: cout<<s->pop()<<endl;
    break;
    case 3:
    cout<<"The value at the top is "<<s->peek()<<endl;
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


default:
    break;
}


    /* code */
} while (ch);






}