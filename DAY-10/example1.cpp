//   Pattern Print lacture-3
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<"  ";
        }
        for(col=1;col<=row;col=col+1)
        {
            cout<<"* ";

        }
        cout<<endl;
    }
}

