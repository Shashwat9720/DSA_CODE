#include<bits\stdc++.h>

using namespace std;


string pre_to_post(string s)
{ stack<string>str;
for(int i=s.size()-1;i>=0;i--)
{   
    if(s[i]!='+'&&s[i]!='-'&&s[i]!='/'&&s[i]!='*'&&s[i]!='^')
    {string sk;
  sk.push_back(s[i]);
    str.push(sk);}
    else 
    {
        string sk=str.top();
        str.pop();
        sk+=str.top();
        str.pop();
        sk.push_back(s[i]);
        str.push(sk);
    }
}
return str.top();
}


int main()
{string s;
cout<<"Enter the prefix expression\n";
cin>>s;
s=pre_to_post(s);
cout<<"The postfix expression is:\n";
cout<<s;
return 0;
}