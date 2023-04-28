// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int evaluate(string s)
{ int i=0;
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
	 x=stk.top()+x;
	 stk.pop();
	 stk.push(x);
 }
 if(s[i]=='-')
 {
	 x=stk.top();
	 stk.pop();
	 x=stk.top()-x;
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
	 x=stk.top()/x;
	 stk.pop();
	 stk.push(x);
 }

}

i++;
}
return stk.top();  
}

int main(){
	string s;
	cout<<"Enter the expression to be evaluated in postfix form\n";
	cin>>s;
	int result=evaluate(s);
	cout<<"The result is "<<result<<endl;

}// } Driver Code Ends


/* Complete the function(s) below */

