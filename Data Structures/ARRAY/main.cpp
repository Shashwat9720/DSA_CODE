#include<iostream>

using namespace std;

int insert(int a[],pos,int x,int n)
{  
 int i;

  for(i=n;i>pos)
  {
      a[i]=a[i-1];
  }
  a[pos]=x;
  n++;
return n;

}

int Delete(int a[],int pos,int n)
{
    for(int i=pos;i<n-1;i++)
    {
        a[i]=a[i-1];
    }
    n--;
    return n;
}

void reverse(int a[],int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
bool search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return 1;
        }
    }
    return 0;
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
    cout<<endl;
}


int main()
{
    int a[1000];
    int n=0;
    int x,ch,pos;
    cout<<"What operation you want to perform\n1-Insert\n2-Delete\n3-Reverse\n4-Search\n0-Exit\n";
    cin>>ch;
    do
    {  switch (ch)
    {
    case 1: cout<<"Enter the value and position where you want it to be inserted\n";
    cin>>x>>pos;
    n=insert(a,pos,x,n);
    
        break;
        case 2:cout<<"Enter the position to be deleted\n";
        cin>>pos;
        n=Delete(a,pos,n);
        break;
        case 3: reverse(a,n);
        break;
        case 4: if(search(a,n,x))
        {
            cout<<"Found\n";
        }
        else
        {
            cout<<"Not found\n";
        }
    
    default: print(a,n);
        break;
    }
        
        cout<<"What operation you want to perform\n1-Insert\n2-Delete\n3-Reverse\n4-Search\n0-Exit\n";
    cin>>ch;
    } while (ch);
    
}