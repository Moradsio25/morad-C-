///Program of Loan Eligibility Checker using functions, conditional statements, and
//parameters

#include<iostream>
using namespace std;
void loanEligibility(int salary,int creditScore)
{
    if(salary>=30000)
    {
        if(creditScore>=700)
        {
            cout<< "Premium loan"<<endl;
        }
        else if(creditScore>=600)
        {
            cout<<"Standard loan"<<endl;
        }
        else
        {
            cout<< "Loan is unavailable" <<endl;
        }
    }
        else
        {
            cout<< "Insufficient salary" <<endl;
        }
    }
int main()
{
    int salary,creditScore;

    cout<< "Enter your salary:";
    cin >>salary;
    cout<< "Enter your credit score:";
    cin>>creditScore;
    loanEligibility(salary,creditScore);

    return 0;
}

