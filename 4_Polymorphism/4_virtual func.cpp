#include<iostream>
using namespace std;
/*
	Virtual Means Existing in effect but not in reality. A type of function
	that apears to exist in some part of a program but does not exist is 
	called virtual function. Virtual functions are used to implement Polymorphism.
	They enable the user to execute completely different functions by the same 
	function call. It is defined in the parent class and can be overridden 
	in child class. It is defined by using the keyword virtual.  
	
	-> is called Member Access Operator.
*/ 
class A{
	public:
		virtual void show(){
			cout<<"Parent Class A... "<<endl;
		}
};
class B: public A{
	public:
		void show(){
			cout<<"Child Class B..."<<endl;
		}
};
class C:public A{
	public:
		void show(){
			cout<<"Child Class C..."<<endl;
		}
};
int main(){
	A obj1;
	B obj2;
	C obj3;
	A *ptr;
	ptr = &obj1;
	ptr->show();
	ptr = &obj2;
	ptr->show();
	ptr = &obj3;
	ptr->show();
}
