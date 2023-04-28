#include<bits\stdc++.h>

using namespace std;

int main()
{int t;
cin>>t;
while(t--)
{int a,b,c,Mx;
cin>>a>>b>>c;
Mx=max(a,b);
Mx=max(c,Mx);
if(Mx==a&&Mx!=b&&Mx!=c)
{
        a=0;
        b=Mx-b+1;
        c=Mx-c+1;
}
if(Mx==b&&Mx!=a&&Mx!=c)
{
        b=0;
        a=Mx-a+1;
        c=Mx-c+1;
}
if(Mx==c&&Mx!=b&&Mx!=a)
{
        c=0;
        b=Mx-b+1;
        a=Mx-a+1;
}
if(Mx==a&&Mx==b&&Mx!=c)
{
        a++;
        b++;
        c=Mx-c+1;
}
if(Mx==a&&Mx==c&&Mx!=b)
{
        a++;
        c++;
        b=Mx-b+1;
}
if(Mx==c&&Mx==b&&Mx!=a)
{
        c++;
        b++;
        a=Mx-a+1;
}
if(Mx==a&&Mx==c&&Mx==b)
{
        a++;
        b++;
        c++;
}


cout<<a<<" "<<b<<" "<<c<<" "<<endl;
}
}