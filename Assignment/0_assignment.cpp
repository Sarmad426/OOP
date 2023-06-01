#include<iostream>
using namespace std;
class Parent1{
	public:
		void operator -(){
			
		}
		void operator ===(){
			
		}
		void operator >=(){
					
		}
};
class Parent2{
	public:
};
class Derived:public Parent1 , public Parent2{
	public:
		void show(){
			cout<<"Child Class: "<<endl;
		}
};
int main(){
	Derived obj;
	obj.show();
}
