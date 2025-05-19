//FACTORIAL ......

#include<iostream>
using namespace std;

int factorialNumber(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorialNumber(n-1);

}
int main()
{
    cout<<factorialNumber(5);
    return 0;
}
