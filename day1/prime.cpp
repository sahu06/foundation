#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a num: "<<endl;
    cin>>n;
    bool flag = true;
    for(int i=2; i<n; i++)
    {
    if(n%i==0)
    {    
        flag = false;
        break;
    }
    }

    if(flag)
        cout<<"prime number";
    else
        cout<<"not a prime number";
    return 0;
}
