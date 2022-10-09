#include <iostream>
#include <conio.h>

using namespace std;

int fact(int n)
{
    int f=1, i ;
    for(i=n; i>=1; i--)
    {
        f=f*i;
    }
    return f;
}


int main()
{
    int n, r;
    cout<<"Enter the value of 'n' and 'r' respectively for nCr to calculate it's factorial : "<<endl;
    cin>>n>>r;
    
    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<"The factorial of "<<n<<"C"<<r<<" is : " <<ans;
    
    return 0;
}
