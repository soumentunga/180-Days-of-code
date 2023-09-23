#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"Enter The Number:";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        fact=fact*i;
    }
    cout<<fact;
}