/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a num: "<<endl;
    cin>>n;
    cout<<"2"<<" ";
    for(int num=3; num<=n; num++){
        bool flag = true;
        for(int i=2; i*i<=num; i++)
        {
            if(num%i==0)
            {    
                flag = false;
                break;
            }   
            
            
            if(flag)
                cout<<num<<" ";
            //else
              //  cout<<"not a prime number.";
        }
    }
    return 0;
}

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a value till you want to print prime number: "<<endl;
    cin>>n;
    if(n==1)
        cout<<1<<" ";
    else
        cout<<1<<" "<<2<<" ";
        
    bool flag;
        
    for(int i=3; i<=n; i++)
    {
        flag = true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0){
                flag = false;
                break;
            }
            
        }
        if(flag)
            cout<<i<<" ";

    }

    return 0;
}
