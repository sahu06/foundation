#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter no.: "<<endl;
    cin>>a>>b;
    int max = a>b? a:b;
    
    max=max/2;
    int i=1;
    int n=0;
    while(i<= max)
    {
        if(a%i==0 && b%i==0)
        {
            n=i;
        }
        i++;
    }
    cout<<"gcd is: "<<n;
    return 0;
}