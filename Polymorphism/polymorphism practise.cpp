#include<iostream>
using namespace std;
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
