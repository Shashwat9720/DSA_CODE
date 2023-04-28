#include<bits\stdc++.h>

using namespace std;

string reverse(string s)
{
    int i=0;
    stack<char>str;
    while(s[i]!=0)
    {
        str.push(s[i]);
        i++;
    
    }
    i=0;
    while(!str.empty())
    {
        s[i]=str.top();
        str.pop();
        i++;

    }
    return s;
}

 int evaluate(string s)
 {
     s=reverse(s);
     int i=0;
int x;
stack<int>stk;
while(s[i]!=0)
{ if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/')
{
	stk.push(s[i]-'0');
}
else
{ if(s[i]=='+')
 {
	 x=stk.top();
	 stk.pop();
	 x=x+stk.top();
	 stk.pop();
	 stk.push(x);
 }
 if(s[i]=='-')
 {
	 x=stk.top();
	 stk.pop();
	 x=x-stk.top();
	 stk.pop();
	 stk.push(x);
 }
 if(s[i]=='*')
 {
	 x=stk.top();
	 stk.pop();
	 x=stk.top()*x;
	 stk.pop();
	 stk.push(x);
 }
 if(s[i]=='/')
 {
	 x=stk.top();
	 stk.pop();
	 x=x/stk.top();
	 stk.pop();
	 stk.push(x);
 }

}

i++;
}
return stk.top();
 }    

int main()
{  string s;
    cout<<"Enter the expression in prefix\n";
    cin>>s;
    int ans=evaluate(s);
    cout<<"The result is "<<ans<<endl;



}