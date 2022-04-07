//WAP to overload a function named func area(),which calculates and returns area of a circle and
//rectangle. Assume appropriate number and type of arguments and return type.
#include<iostream>
using namespace std;
float area(float r)
{
	float result;
	result=3.14*r*r;
	return result;
}
float area(float b,float c)
{
	float result2;
	result2=b*c;
	return result2;
}
int main()
{
	cout<<"\n The area of a circle is"<<area(5)<<endl;
	cout<<"\n The area of rectangle is"<<area(3,4)<<endl;
	return 0;
}
