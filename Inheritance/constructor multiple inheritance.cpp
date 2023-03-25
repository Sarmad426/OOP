#include<iostream>
using namespace std;
// Parent Class
class First_Class{
	private:
		int a;
	public:
		// Non-parameterised Constructor
		First_Class(){
			a = 0;
		}
		// Parameterised Constructor
		First_Class(int a1){
			a = a1;
		}
		void show(){
			cout<<"a: "<<a<<endl;
		}
};
// Child Class
class Second_Class{
	private:
		int b;
	public:
		Second_Class(){
			b = 0;
		}
		Second_Class(int b1){
			b = b1;
		}
		void show(){
			cout<<"b: "<<b<<endl;
		}
};
// Grand Child Class.
class Third_Class: public First_Class, public Second_Class{
	private:
		int c;
	public:
		// Accessing Parameterised Constructor..
		Third_Class(int x, int y, int z): First_Class(x), Second_Class(y) {
			c = z;
		}
		void show(){
			First_Class::show();
			Second_Class::show();
			cout<<"C: "<<c<<endl;
		}
};
int main(){
	// Accessing Parameterised Constructor.
	Third_Class first(5,10,15);
	first.show();
}
