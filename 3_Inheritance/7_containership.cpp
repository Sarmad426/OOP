#include<iostream>
using namespace std;
/*
	Containership. 
	When an object of a class is used as a data member in another class
	then this is called containership or has_a relationship.
*/
class Account{
	private:
		string name;
		static int r_no;
		int roll_no;
	public:
		Account(){
			r_no++;
			roll_no = r_no;
		}
		void get_name(){
			cout<<"Enter Name: "<<endl;
			getline(cin,name);
		}
		void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll_no<<endl;
		}
};
class Marks{
	private:
		long int marks;
		Account ac;
	public:
		void get_marks(){
			ac.get_name();
			cout<<"Enter Marks: "<<endl;
			cin>>marks;
			cin.ignore(); // add this line to discard remaining characters in input buffer
		}
		void show(){
			ac.show();
			cout<<"Marks: "<<marks<<endl;
		}
};
int Account::r_no=0;
int main(){
	Marks m1,m2,m3;
	m1.get_marks();
	m2.get_marks();
	m3.get_marks();
	m1.show();
	m2.show();
	m3.show();
	return 0;
}

