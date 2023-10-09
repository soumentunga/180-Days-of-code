
//This is a bad Practice Dynamically Decide Array size.

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter The Size: ";
    cin>>size;
    cout<<"Enter The Array:";
    int arr[size];
    for(int i=0;i<size;i++)
    
    cin>>arr[i];
   
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;

}