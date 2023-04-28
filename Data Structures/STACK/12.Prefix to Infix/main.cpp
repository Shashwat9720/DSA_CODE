#include<bits/stdc++.h>

using namespace std;

string reverse(string s)
{
  stack<char>stk;
  int i=0;
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

string posttoinf(string s)
{ string str;
stack<string>stk;
int i,n;
n=s.size();
s=reverse(s);
for(i=0;i<n;i++)
{
    if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
    {
        string s1,s2;
        s1.push_back('(');
        s1=s1+stk.top();
        stk.pop();
        s2=stk.top();
        stk.pop();
        s1.push_back(s[i]);
        s1=s1+s2;
        s1.push_back(')');
        stk.push(s1);
     
}
if(s[i]>='a'&&s[i]<='z')
{
    string s1;
    s1.push_back(s[i]);
    stk.push(s1);
}
}
while(!stk.empty())
{
   str=str+stk.top();
   stk.pop();
}


 return str;


}


int main()
{string s;
cout<<"Enter the expression in postfix notation\n";
cin>>s;
s=posttoinf(s);
cout<<"The expression in infix notation is:\n";
cout<<s;



}