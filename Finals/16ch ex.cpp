#include<iostream>
using namespace std;

class Parent{
	public:
		// Pure virtual function
		virtual void show()=0;
};
class Child1 : public Parent{
	public:
		void show(){
			cout<<"Child class 1: "<<endl;
		}
};
class Child2 : public Parent{
	public:
		void show(){
			cout<<"Child class 2: "<<endl;
		}
};
int main(){
	Parent *ptr[2];
	ptr[0] = new Child1;
	ptr[1] = new Child2;
	ptr[0]->show();
	ptr[1]->show();
}
