#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<< " Bank Withdrawal " <<endl;
    cout<< " Please Enter the withdrawal Amount: " ;
    cin>>a;
    if(a%500==0)
    {
        cout<< " you have withdrawn " << a <<" Successfully."<<endl;
    }
    else
    {
        cout<< "Error:Withdrawal must be a multiple of 500"<<endl;
    }
    return 0;
}
