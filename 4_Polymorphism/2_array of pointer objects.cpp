#include<iostream>
using namespace std;
class Person{
	private:
		char name[50];
	public:
		void get_name(){
			cout<<"Enter your name: "<<endl;
			cin>>name;
		}
		void show(){
			cout<<"Name: "<<this->name<<endl;
		}
};
int main(){
	Person *ptr[5];
	int index;
	for(index=0;index<5;index++){
		ptr[index] = new Person; 
		ptr[index]->get_name();
	}
	for(index =0 ;index<5;index++){
		ptr[index]->show();
	}
}
