#include<iostream>
using namespace std;
//print n natural number square
int main()
{
    int n;
    cout<<"enter the Number:";
    cin>>n;
    
    for(int count=1;count<=n;count=count+1)
    {
        cout<<count<< "Square is:"<<count*count<<endl;
    }
}