#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the Number:";
    cin>>n;
    if(n<2)
    {
        cout<<"Not a Prime Number";
        return 0;
    }
    else
    {
        for(i=2;i<n;i=i+1)
        {
            if(n%i==0)
            {
            cout<<"Not a Prime Number";
            return 0;
            }
        }
        cout<<"Prime Number";
        return 0;
    }

    return 0;//to tell the compiler that program is end no need to go next line.
}