//Print Sum of square of first n natural number.

#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter n:";
    cin>>n;
    
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+(i*i);
       
    }
        cout<<sum;
}