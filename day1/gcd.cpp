#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter two numbers: "<<endl;
    cin>>m>>n;
    int r;
    r=m%n;
    
    while (r!=0)
    {
        m=n;
        n=r;
        r=m%n;
    }
    cout<<n;

    return 0;
}