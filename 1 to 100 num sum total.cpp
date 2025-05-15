
#include<iostream>
using namespace std;

int main ()
{
   //Statements before loop
int n, triNum;
triNum = 0;

n = 1; //initialization loop control variable

while (n <= 200){//while loop condition

	triNum = triNum + n; //Statements inside loop
	n = n + 1;
}
//Statements after loop
cout<<"The 200th triangular number = " << triNum;
return 0;
}
