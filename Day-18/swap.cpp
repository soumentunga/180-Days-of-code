#include<iostream>
using namespace std;

void swap( int &a,int &b) // Pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";
}