#include<iostream>
using namespace std;
class Student{
	protected:
		string name;
		int roll_no;
		bool scholarship;
		char grade;
	public:
		static int r_no;
		Student(){
			r_no+=1;
			roll_no=r_no;
		}
		void get_values(){
			cout<<"Enter Name: "<<endl;
			cin>>name;
			cout<<"Enter Grade: "<<endl;
			cin>>grade;
			if(grade=='A'){
				scholarship = true;
			}else{
				scholarship = false;
			}
		}
		void details(){
			cout<<"\nName: "<<name<<endl;
			cout<<"Roll No: "<<roll_no<<endl;
			cout<<"Grade: "<<grade<<endl;
			string sch = scholarship ? "Available" : "Not Available";
			cout<<"Scholarship: "<<sch<<endl;
		}
};
int Student::r_no=0;
int main(){
	Student s1,s2,s3;
	s1.get_values();
	s2.get_values();
	s3.get_values();
	s1.details();
	s2.details();
	s3.details();
}
