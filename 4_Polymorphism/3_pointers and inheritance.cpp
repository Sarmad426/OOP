#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"Parent Class A: "<<endl;
		}
};
class B: public A{
	public:
		void show(){
			cout<<"Child Class B: "<<endl;
		}
};
class C: public A{
	public:
		void show(){
			cout<<"Child Class C: "<<endl;
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
/*
	Program Explaination
		This program prints (Parent class A) 3 times on the terminal because ptr in this 
		case is the pointer object of A in all that scenerios. It only holds the memory 
		address of A in that case. So to avoid this problem we use virtual functions in 
		the base class that can be overridden according to the condition.   
*/
