#include<bits/stdc++.h>

using namespace std;

class heap
{   private:
    int cap;
    int size;
    int* arr;
    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    public:
    heap(int x)
    {
        cap=x;
        size=0;
        arr=new int[cap];
    }
    void insert(int x)
    {
        if(size==cap)
        return;
        arr[size]=x;
        size++;
        int i=size-1;
        while(i>0&&arr[i]>arr[parent(i)])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    
    
    int heapify(int i)
    {
        int largest=i;
        if(2*i+1<size&&arr[largest]<arr[2*i+1])
        largest=2*i+1;
         if(2*i+2<size&&arr[largest]<arr[2*i+2])
        largest=2*i+2;
         if(i!=largest)
        {
            swap(arr[i],arr[largest]);
            heapify(largest);
        }
    }
    int extractMax()
    {
        if(size==0)
        return -1;
        swap(arr[0],arr[size-1]);
        heapify(0);
        size--;
        return arr[size];
    }
    void increaseKey(int i,int x)
    {
        arr[i]=x;
        while(i>0&&arr[parent(i)]<arr[i])
        {
           swap(arr[i],arr[parent(i)]);
           i=parent(i);
        }
    }
    void delete_node(int i)
    {  int x=INT_MAX;
        increaseKey(i,x);
        extractMax();

    }
    void buildheap()
    {
        for(int i=size-1;i>=0;i--)
        heapify(i);
    }


};


int main()
{ cout<<"Enter the size of the min heap\n";
int n;
cin>>n;
heap* h=new heap(n);

do
{
    cout<<"What operation you want to perform on heap\n1-Insert\n2-Delete a partocular node\n3-Extract maximum\n4-Decrease a key\n0-Exit\n";
cin>>n;
switch (n)
{ int k;
case 1:cout<<"Enter the value to be inserted\n";
cin>>k;
h->insert(k);
break;
case 2:
cout<<"Enter the index of node to be removed\n";
cin>>k;
h->delete_node(k);
break;
case 3:
cout<<"Maximum value is:"<<h->extractMax()<<endl;
break;
case 4:cout<<"Enter the key and value\n";
int val;
cin>>k>>val;
h->increaseKey(k,val);
default:
    break;
}
} while (n);

     
}