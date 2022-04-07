//Using inline function,WAP to add two numbers and return sum.
#include<iostream>
using namespace std;
inline int displaySum(int num1,int num2)
{
	return num1+num2;
}
int main()
{
	int n1,n2;
	cout<<"Enter the first number:";
	cin>>n1;
	cout<<"\n Enter second number:";
	cin>>n2;
	cout<<"\n the sum of two numbers are "<<n1<<" + "<<n2<<" = "<<displaySum(n1,n2);
	return 0;
}
