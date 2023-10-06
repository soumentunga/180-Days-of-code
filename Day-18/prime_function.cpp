#include<iostream>
using namespace std;

bool Prime (int n)
{
    if(n<2)
    return 0;

    for(int i=2;i<=n;i++)
    {
        if(n%2==0)
        return 0;
    }

    return 1;
}

int Fact(int n=3) //Default Parameter
{
    int ans = 1;
    for(int i=1;i<=n;i++)
    ans = ans*i;

    return ans;
}


int main()
{
    int a,b;
    cout<<"Enter the 2 Number:";
    cin>>a>>b;
    cout<<Fact();
    cout<<endl;
    //A is Prime or not 
    cout<<Prime(a)<<endl;
    //A ka Factorial
    cout<<Fact(a)<<endl;
    //B is Prime Or not
    cout<<Prime(b)<<endl;
    //B ka Factorial
    cout<<Fact(b)<<endl;
    //B-A Prime or not 
    cout<<Prime(b-a)<<endl;
    //B-A ka FactoriaL
    cout<<Fact(b-a)<<endl;

}