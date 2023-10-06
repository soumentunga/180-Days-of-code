#include<iostream>
using namespace std;

void Prime (int n)
{
    if(n<2)
    {
        cout<<0<<endl;
        return ;
    }
    for(int i=2;i<=n;i++)
    {
        if(n%2==0)
        {
            cout<<0<<endl;
            return ;
        }
        
    }
    cout<<1<<endl;
    return ;
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
    Prime(a);
    //A ka Factorial
    cout<<Fact(a)<<endl;
    //B is Prime Or not
    Prime(b);
    //B ka Factorial
    cout<<Fact(b)<<endl;
    //B-A Prime or not 
    Prime(b-a);
    //B-A ka FactoriaL
    cout<<Fact(b-a)<<endl;

}