#include<iostream>
using namespace std;
int main()
{
    int n,i,pow,num;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<"Enter the Power:";
    cin>>pow;
    num=n;
    for(i=1;i<pow;i=i+1)
    {
        num=num*n;
    }
    cout<<num;
}