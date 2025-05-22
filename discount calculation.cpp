#include<iostream>
using namespace std;
int main()
{
   cout<< " Discount Calculator "<<endl;
   double amount, discount=0.0, finalAmount;

   cout<< " Enter the purchase amount: ";
   cin>>amount;
   if(amount > 10000)
   {
       discount=0.30*amount;}
   else if(amount >=4000 && amount <=10000)
   {
       discount = 0.20 * amount;
   }
    finalAmount =amount - discount;
    cout<< " Final amount after discount:" << finalAmount <<endl;
    return 0;
}
