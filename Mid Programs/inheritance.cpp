#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		void get_props(){
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter Age: "<<endl;
			cin>>age;
		}
		void details(){
			cout<<"\nPersonal Information : "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class Student: public Person{
	private:
		int roll_no;
		float gpa;
	public:
		void get_edu_info(){
			cout<<"Enter Roll No: "<<endl;
			cin>>roll_no;
			cout<<"Enter Gpa: "<<endl;
			cin>>gpa;
		}
		void edu_details(){
			cout<<"\nEducational Information : "<<endl;
			cout<<"Roll No: "<<roll_no<<endl;
			cout<<"Gpa: "<<gpa<<endl;
		}
};
int main(){
	Student student;
	student.get_props();
	student.get_edu_info();
	student.details();
	student.edu_details();
}
