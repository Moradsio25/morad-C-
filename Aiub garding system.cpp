#include<iostream>
using namespace std;
int main()
{
    float n;
    cout<<"Aiub Grading System : "<<endl;
    cout<< "Enter your number "<<endl;
    cin>>n;
    if(n>=90)
    {
        cout<<"Grade letter=A+,Grade point=4.00"<<endl;
    }
    else if(n>=85)
    {
        cout<<"Grade letter= A,Grade point =3.75"<<endl;
    }
    else if(n>=80)
    {
        cout<<"Grade letter= B+, Grade point = 3.50"<<endl;
    }
    else if(n>=75)
    {
        cout<<"Grade letter= B , Grade point= 3.25"<<endl;
    }
    else if(n>=70)
    {
        cout<<"Grade letter= C+, Grade point= 3.00"<<endl;
    }
    else if(n>=65)
    {
        cout<<"Grade letter= C, Grade point= 2.75"<<endl;
    }
    else if(n>=60)
    {
        cout<<"Grade letter= D+ , Grade point= 2.50"<<endl;
    }
    else if(n>=50)
    {
        cout<<"Grade letter= D, Grade point= 2.25"<<endl;
    }
    else
    {
        cout<<"Grade letter=F ,Grade point=0.00"<<endl;
    }
    return 0;
}
