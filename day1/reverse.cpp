#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int i=1;
    int m,s=0;
    while(n>0)
    {
        m=n%10;
        s=s*10+m;
        n=n/10;
        i++;
    }
    cout<<s;
}