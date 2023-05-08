#include<iostream>
using namespace std;
/*
	this pointer
		this is a keyword that refers to the current instance of the class. There can be 3 main 
		usage of this keyword in C++. It can be used to pass current object as a parameter to 
		another method. It can be used to refer current class instance variable.
*/
class Person{
	private:
		string name;
		int age;
	public:
		Person(string name,int age){
			this->name = name;
			this->age = age;
		}
		void details(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
int main(){
	Person p1("Sarmad",18);
	Person p2("Hammad",21);
	Person p3("Naveed",23);
	p1.details();
	p2.details();
	p3.details();
}
