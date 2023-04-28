#include<bits/stdc++.h>

using namespace std;

string post_to_pre(string s)
{  stack<string>str;
for(int i=0;i<s.size();i++)
{ if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'&&s[i]!='^')
 {
    string sk;
    sk.push_back(s[i]);
    str.push(sk);
 }
 else 
 {
    string sk;
    sk.push_back(s[i]);
    string s1=str.top();
    str.pop();
    sk+=str.top();
    str.pop();
    sk+=s1;
    str.push(sk);
 }

}

    return str.top();  
}

int main()
{string s;
cout<<"Enter the expression is postfix\n";
cin>>s;
s=post_to_pre(s);
cout<<"The expression in prefix is:\n";
cout<<s<<endl;


}