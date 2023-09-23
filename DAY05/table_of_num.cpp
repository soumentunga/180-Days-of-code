#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the Table:";
    cin>>n;
    for(i=n;i<=10*n;i=i+n)
    {
        cout<<i<<endl;
    }
}