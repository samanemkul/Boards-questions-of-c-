//WAP to find perimeter of a square,rectangle and circle using function overloading.
#include<iostream>
using namespace std;
float peri()
{
	float result,r=5;
	result=2*3.14*r;
	return result;
}
float peri(float a)
{
	float result1;
	result1=4*a;
	return result1;
}
float peri(float b,float c)
{
	float result2;
	result2=2*(b+c);
	return result2;
}
int main()
{
	cout<<"\n The perimeter of a circle is"<<peri()<<endl;
	cout<<"\n The perimeter of square is"<<peri(2)<<endl;
	cout<<"\n The perimeter of rectangle is"<<peri(3,4)<<endl;
	return 0;
}
