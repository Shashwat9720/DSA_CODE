#include <iostream>

using namespace std;
int Sum_of_Array(int A[],int n)
{int sum;
sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+A[i];
}
return sum;

}
int main()
{int i,n,sum,A[100];
cout<<"Enter the number of elements of the array\n";
cin>>n;
cout<<"Enter the elements of the array\n";
for(i=0;i<n;i++)
{
    cin>>A[i];
}
sum=Sum_of_Array(A,n);
cout<<"The sum is "<<sum;
    return 0;
}
