//WAP to calculate the area of rectangle by using default argument.
#include<iostream>
using namespace std;
int area(int a=5,int b=2)
{
	int result;
	result = a*b;
	return result;
}
int main()
{
	cout<<"\n The area of rectangle is "<<area()<<endl;
	return 0;
	
}

