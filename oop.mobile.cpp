#include<iostream>
#include<string>
using namespace std;

class mobile{
public:
    string brand;
    string model;
    float price;
    int releaseYear;

    mobile(string B,string M, float p,int Y)
    {
        brand=B;
        model=M;
        price=p;
        releaseYear=Y;
    }
    void showDetails()
    {
        cout<<" Brand Name: "<< brand <<endl;
        cout<<" Model Name: "<< model <<endl;
        cout<<" Price is : "<< price <<endl;
        cout<<" Release Year: "<< releaseYear <<endl;
    }
    bool HighEnd()
    {
        if(price>50000)
            cout<< brand <<" is high end "<<endl;
        else
            cout<<brand<< " is not high end "<<endl;
    }
};
int main()
{
    mobile m1("Iphone","16promax",150000,2024);
    mobile m2("realme","9 pro",30000,2023);
    m1.showDetails();
    m1.HighEnd();
    m2.showDetails();
    m2.HighEnd();

    return 0;
}
