#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int n;
    cout<<"Enter The number :";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {   
        //space print
        for(col=1;col<=n-row;col=col+1)
        cout<<"  ";
        //pattern print
        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
