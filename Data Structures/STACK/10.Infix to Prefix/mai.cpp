#include<bits/stdc++.h>

using namespace std;

string reverse(string s)
{ int i=0;
 stack<char>stk;
 while(s[i]!=0)
 {
     stk.push(s[i]);
     i++;
 }
 i=0;
 while(!stk.empty())
{
    s[i]=stk.top();
    stk.pop();
    i++;
}
return s;



}

string inftopre(string s)
{string str;
stack<char>stk;
s=reverse(s);
int n=s.size();
int i=0;
for(i=0;i<n;i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    {
        str.push_back(s[i]);
    }
    else if(s[i]>='a'&&s[i]<='z')
    {
        str.push_back(s[i]);
    }
    else 
    {
        if(s[i]==')')
        {
            stk.push(s[i]);
        }

        if(s[i]=='(')
        {
            if(!stk.empty())
            {
                while(stk.top()!=')')
                {
                    str.push_back(stk.top());
                    stk.pop();
                    if(stk.empty())
                    {
                        break;
                    }
                }
            }
            stk.pop();
        }
          if(s[i]=='+'||s[i]=='-')
        {
            if(!stk.empty())
            {
                while(stk.top()=='*'||stk.top()=='^'||stk.top()=='/')
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
          if(s[i]=='^')
        {
            
            stk.push(s[i]);
        }

    }

}
while(!stk.empty())
{
    str.push_back(stk.top());
    stk.pop();
}
str=reverse(str);
return str;

}

int main()
{ string s;
cout<<"Enter the expression in infix notation\n";
cin>>s;
s=inftopre(s);
cout<<"The expression in prefix notation is:\n";
cout<<s;

}