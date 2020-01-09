#include<iostream>
using namespace std;

int main()
{
    int a,count=0;
    cout<<"Enter the num of table: "<<endl;
    cin>>a;
    count=a;
    
    for(int i=1; i<=10; i++)
    {
        cout<<count<<endl;
        count+=a;
    }    return 0;
}