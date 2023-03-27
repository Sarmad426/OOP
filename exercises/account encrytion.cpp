#include<iostream>
using namespace std;
bool valid_email(string email){
	bool valid = false;
	int length = email.length();
	for(int i=0;i<=length;i++){
		if(email[i]=="@"){
			valid = true;
			break;
		}
	}
}
class Account{
	protected:
		string name,email;
		static int id;
		string password;
	public:
		Person(){
			name = "No name";
			age = 0;
		}
		void create_account(){
			cout<<"Enter Your Name: "<<endl;
			cin.ignore();
			getline(cin,name);
			cout<<"Enter Your Email: "<<endl;
			cin.ignore();
			getline(cin,email);
			cout<<"Enter Your Password: "<<endl;
			cin.ignore();
			getline(cin,password);
		}
		void details(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
			Person copy_object(Person person1){
			Person person2;
			person2.name = person1.name;
			person2.age = person1.age;
			
			return person2;
		}
};
int main(){
	Person person;
	person.set_props("Sarmad",18);
	person.details();
	cout<<"Data after Object Copy. \n";
	cout<<"Name: "<<person.copy_object(person).name<<endl;
	cout<<"Age: "<<person.copy_object(person).age<<endl;
}
