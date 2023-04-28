#include<bits/stdc++.h>

using namespace std;

bool balance(string s)
{ stack<char>stk;
int i,n;
n=s.size();
for(i=0;i<n;i++)
{
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
    {
        stk.push(s[i]);
    }
    else
    {
        if(s[i]==')')
        {   if(stk.empty())
        {
            return 0;
        }
            if(stk.top()!='(')
            {
                return 0;
            }
            stk.pop();
        }
        if(s[i]=='}')
        {  if(stk.empty())
        {
            return 0;
        }
            if(stk.top()!='{')
            {
                return 0;
            }
            stk.pop();
        }
        if(s[i]==']')
        {   if(stk.empty())
        {
            return 0;
        }
            if(stk.top()!='[')
            {
                return 0;
            }
            stk.pop();
        }

    }
    
}
if(stk.empty())
{
    return 1;
}
else
{
    return 0;
}

}

int main()
{   string s;
    cout<<"Enter the expressions\n";
    cin>>s;
    if(balance(s))
    {
        cout<<"The expression is valid\n";
    }
    else
    {
        cout<<"The expression is invalid\n";
    }



}