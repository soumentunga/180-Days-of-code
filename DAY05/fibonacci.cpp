#include<iostream>
using namespace std;
int main()
{
    int last,pre,current,i,n;
    cout<<"Enter n:";
    cin>>n;
    last=0;
    pre=1;

    for(i=3;i<=n;i++)
    {
        current=last+pre;
        last=pre;
        pre=current; 
    }

    cout<<current;
}