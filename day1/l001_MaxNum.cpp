#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers with space: "<<endl;
    cin>>a>>b>>c;
    int max_num=0;
    if(a>=b && a>=c)
    {max_num=a;}
    else if(b>=a && b>=c)
    {max_num=b;}
    else
    {max_num=c;}
    cout<<"the greatest num is: "<<max_num;
    return 0;
}