//WAP to concatenate two string by overloading binary operator + using string class//
#include<iostream>
using namespace std;
class Conc
{
	public:
	string str;
	void input()
	{
		cout<<"Enter the string:";
		getline(cin,str);
		fflush(stdin);
	}

	Conc operator + (Conc obj1)
	{
		Conc temp;
		temp.str=str+obj1.str;
		return temp;
	}
	void output()
	{
		cout<<"Concatenated string is:"<<str;
	}
};
int main()
{
	Conc conc1,conc2;
	conc1.input();
	conc2.input();
	conc1=conc1+conc2;
	conc1.output();
	return 0;

	
}
