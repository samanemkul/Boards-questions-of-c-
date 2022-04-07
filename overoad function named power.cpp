#include<iostream>
#include<math.h>
using namespace std;
class number
{
	int w,x,y,z,result;
	public:
		number()
	{
		w=0;
		x=0;
		y=0;
		z=0;
	}
		void power(int a,int b)
		{
			result=pow(a,b);			
		}
		void power(int a ,int b,int c)
		{
			int add=a+b;
			result=pow(add,c);			
		}
		void display()
		{
			cout<<"the answer is "<<result;
		}
};
int main()
{
	number obj;
	int ch,b1,b2,p;
	cout<<"how many arguments do you have ?";
	cout<<"\n1.two(a^b)\n2.three ((a+b)^c)\ninput your choice ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"input base and power respectively : ";
			cin>>b1>>p;
			obj.power(b1,p);
			obj.display();
			break;
		case 2:
			cout<<"input bases and power respectively : ";
			cin>>b1>>b2>>p;
			obj.power(b1,b2,p);
			obj.display();
			break;
			default:
				cout<<"invalid choice";
	}
	return 0;
}
