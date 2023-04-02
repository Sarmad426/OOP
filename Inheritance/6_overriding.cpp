// Function overriding.
/*
  Function overriding in C++ is a concept by which you can define a function of the 
  same name and the same function signature (parameters and their data types) in both 
  the base class and derived class with a different function definition.
*/
#include<iostream>
using namespace std;
class Base{
	public:
		void func(string name){
			cout<<"Hi "<<name;
		}
};
class Derived: public Base{
	public:
		void func(){
			cout<<"Hi Everyone \n";
		}
};
int main(){
	Derived obj1,obj2;
	obj1.func();
  // Accessing 
	obj2.Base::func("Sarmad");
}
