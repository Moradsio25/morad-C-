// Question number 1......
#include<iostream>
using namespace std;

class Employee{
public:
    string name;
    int id;
    float salary;
    void input()
    {
     cout<<"Enter Name:"<<endl;
     cin>>name;
     cout<<"Enter ID:"<<endl;
     cin>>id;
     cout<<"Enter salary:"<<endl;
     cin>>salary;
    }
    void display()
    {
        cout<<"Name:"<<name<<",ID:"<<id<<",salary:"<<salary<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of employees:"<<endl;
    cin>>n;

    Employee emp[100];
    for(int i=0;i<n;i++)
    {
        cout<<"Employee"<<i+1<<endl;
        emp[i].input();
    }
    cout<<"All Employees:"<<endl;
    for(int i=0;i<n;i++)
    {
     emp[i].display();
    }
    int maxIndex=0;
    for(int i=0;i<n;i++)
    {
        if(emp[i].salary>emp[maxIndex].salary)
        {
            maxIndex=i;
        }
    }
    cout<<"Employee with highest salary:"<<endl;
    emp[maxIndex].display();
    return 0;
}
