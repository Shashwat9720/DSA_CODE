#include<bits/stdc++.h>

using namespace std;

string inftopost(string s)
{ string str;
stack<char>stk;
int n=s.size();
int i;
for(i=0;i<n;i++)
{if(s[i]>='a'&&s[i]<='z')
 {
     str.push_back(s[i]);
 }
 else if(s[i]>='A'&&s[i]<='Z')
 {
     str.push_back(s[i]);
 }
 else
 { if(s[i]=='(')
 {
     stk.push(s[i]);
 }
 if(s[i]==')')
 {
     if(!stk.empty())
     {
         while(stk.top()!='(')
         {
             str.push_back(stk.top());
             stk.pop();
             if(stk.empty())
             {
                 break;
             }
         }}
         stk.pop();
     }
     if(s[i]=='+'||s[i]=='-')
     {
         if(!stk.empty())
         {
             while(stk.top()=='+'||stk.top()=='-'||stk.top()=='*'||stk.top()=='/'||stk.top()=='^')
             {
                 str.push_back(stk.top());
                 stk.pop();
                 if(stk.empty())
                 {
                     break;
                 }
             }
         }
           stk.push(s[i]);
     }
      if(s[i]=='*'||s[i]=='/')
     {
         if(!stk.empty())
         {
             while(stk.top()=='*'||stk.top()=='/'||stk.top()=='^')
             {
                 str.push_back(stk.top());
                 stk.pop();
                 if(stk.empty())
                 {
                     break;
                 }
             }
         }
         stk.push(s[i]);
     }
      if(s[i]=='^')
     {
         if(!stk.empty())
         {
             while(stk.top()=='^')
             {
                 str.push_back(stk.top());
                 stk.pop();
                 if(stk.empty())
                 {
                     break;
                 }
             }
         }
         stk.push(s[i]);
     }
 }
}
while(!stk.empty())
{
    str.push_back(stk.top());
    stk.pop();
}
return str;
}

int main()
{string s;
cout<<"Enter the expression in infix notation\n";
cin>>s;
s=inftopost(s);
cout<<"The expression is postfix is:\n"<<s;



}