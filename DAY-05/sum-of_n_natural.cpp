#include<iostream>
using namespace std;
int main()
{
    int sum,i,n;
    cout<<"Enter the Number:";
    cin>>n;
    sum=0;

    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i;
    }
    cout<<sum;

}