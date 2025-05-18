//Write a function that takes the radius of a circle and returns the area.....

#include<iostream>
using namespace std;

float areaofcircle(float radius)
{
    const float PI=3.1416;
    return PI*radius*radius;
}
int main()
{
    float radius;
    cout<<"Enter the redius of circle:";
    cin>>radius;

    float area= areaofcircle(radius);
    cout<<"The area of the circle is:"<<area<<endl;
    return 0;
}
