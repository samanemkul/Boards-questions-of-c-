#include<iostream>
using namespace std;
class areaRectangle
{
	int length,breadth,result;
	public:
	void putData(int x=5,int y=3)
	{
		length=x;
		breadth=y;
	}
	int calculate()
	{
		result=length*breadth;
		return result;
	}
};
int main()
{
	areaRectangle obj;
	obj.putData();
	cout<<"Area:"<<obj.calculate();
}
