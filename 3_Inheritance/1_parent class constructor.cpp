#include<iostream>
using namespace std;
class Parent{
	protected:
		string name;
	public:
		Parent(){
			name = "No name";
		}
		Parent(string Name){
			name = Name;
		}
};
class Child : public Parent {
	private:
		int age;
	public:
		Child(){
			age = 0;
		}
		// Accessing Parent Constructor
		Child(string name,int Age): Parent(name){
			age = Age;
		}
		void details(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
int main(){
	Child child2("Sarmad",18);
	child2.details();
}
