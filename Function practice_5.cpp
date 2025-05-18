//Write a function that takes three numbers as input and returns the largest one .....

#include<iostream>
using namespace std;
int maxNumber(int a,int b,int c)
{
    if(a>=b&&a>=c)
        return a;
    else if(b>=a&&b>=c)
        return b;
    else
        return c;
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers:";
    cin>>num1>>num2>>num3;
    int maximum=maxNumber(num1,num2,num3);
    cout<<"The largest number is:"<<maximum <<endl;
    return 0;
}
