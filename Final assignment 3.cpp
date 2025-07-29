//Question number 3.....
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter number of students:"<<endl;
    cin>>n;
    float marks[100];
    float sum=0;
    for(int i=0;i<n;i++)
    {   cout<<"Enter marks for students "<<i+1<<":"<<endl;
        cin>>marks[i];
        sum+=marks[i];
    }
    float average=sum/n;
    float highest= marks[0];
    int aboveAverage=0;
    for(int i=0;i<n;i++)
    {
        if(marks[i]>average)
        {
            aboveAverage++;
        }
        if(marks[i]>highest)
        {
            highest=marks[i];
        }
    }
    cout<<"Average Marks:"<<average<<endl;
    cout<<"Highest Marks:"<<highest<<endl;
    cout<<"Number of students above average:"<<aboveAverage<<endl;
    return 0;
    }
