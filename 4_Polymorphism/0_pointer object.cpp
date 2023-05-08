#include<iostream>
using namespace std;
class Test{
	private:
		int count;
	public:
		Test(){
			cout<<"Enter count value: "<<endl;
			cin>>count; 
		}
		void show(){
			cout<<"Count: "<<count<<endl;
		}
};
int main(){
	Test *my_ptr;
	my_ptr = new Test;
	my_ptr->show();
}
/* 
	new operator
		The new operator create an instance of a user-defined object type or of 
		one of the built-in object types that has a constructor function
*/

/*
	Class Member Access Operator (->) Overloading in C++
		It is defined to give a class type a "pointer-like" behavior. The operator -> 
		must be a member function. If used, its return type must be a pointer or an 
		object of a class to which you can apply.
*/
