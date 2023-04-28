#include<bits/stdc++.h>

using namespace std;

string reverse(string s)
{
    stack<char>S;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        S.push(s[i]);
    }
    for(int i=0;i<n;i++)
{
    s[i]=S.top();
    S.pop();

}
return s;
}

int main()
{ string S;
cout<<"Enter the string\n";
cin>>S;
cout<<"The orignal string is:\n"<<S<<endl;
S=reverse(S);
cout<<"The reverse string is:\n"<<S<<endl;



    return 0;
}