//wap to find the largest number of 2 class using driend function
#include<iostream>
using namespace std;
class A;
class B{
	public:
		int a;
		friend  find(A &a,B &b);
};
class A{
	public:
		int a;
		friend find(A &a,B &b){
			if(a.a>b.a){
				cout<<"the largest number is: "<<a.a;
			}
			else if (b.a>a.a){
				cout<<endl<<"the largest number is: "<<b.a;
			}
			else {
				cout<<endl<<"they are equal:";
			}
		}
};
int main(){
	A obj1;
	B obj2;
	cout<<"enter a number : ";
	cin>>obj1.a;
	cout<<"enter second number : ";
	cin>>obj2.a;
	find(obj1,obj2);
	return 0;
}

