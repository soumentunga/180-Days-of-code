#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={2,3,1,7,8};  
    int ans = INT_MAX;
    //minmum  value
    for(int i=0;i<=5;i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
        cout<<ans<<endl;

        //Maximum Value

        ans = INT_MIN;
         for(int i=0;i<=5;i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout<<ans<<endl;

    return 0;
}