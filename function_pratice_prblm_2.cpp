//Program of a Grade Calculator using functions condional statements and peramters.....

#include<iostream>
using namespace std;
void gradeCalculator(int marks)
{
    if(marks>=90)
    {
        cout<< " Grade-A " <<endl;
    }
    else if(marks>=80)
    {
        cout<< " Grade-B " <<endl;
    }
    else if(marks>=70)
    {
        cout<< " Grade-C " <<endl;
    }
    else if(marks>=60)
    {
        cout<< " Grade-D" <<endl;
    }
    else
    {
        cout << "Grade-F" <<endl;
    }
}
    int main()
    {
    int marks;
    cout<<" Enter your marks:";
    cin>>marks;
    gradeCalculator(marks);
    return 0;
    }

