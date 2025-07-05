//Question num 2.......
#include<iostream>
using namespace std;
class Rectangle
{
public:
    float length,width;
    void input()
    {
        cout<<"Enter length:"<<endl;
        cin>>length;
        cout<<"Enter width:"<<endl;
        cin>>width;
    }
    float area()
    {
        return length*width;
    }
};
int main()
{
    int n;
    cout<<"Enter number of rectangles:"<<endl;
    cin>>n;
    Rectangle rect[100];
    for(int i=0;i<n;i++)
    {
        cout<<"Rectangle: "<<i+1<<endl;
        rect[i].input();
    }
    int maxIndex=0;
    for(int i=0;i<n;i++)
    {
        if(rect[i].area()>rect[maxIndex].area())
        {
            maxIndex=i;
        }
    }
    cout<< "Rectangle with the largest area is Rectangle"<<maxIndex+1<<"with area:"<<rect[maxIndex].area()<<endl;
    return 0;
}
