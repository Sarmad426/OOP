#include<iostream>
using namespace std;
bool valid_length(string name){
	if(name.length()<4){
		return false;
	}
	return true;
}
bool valid_values(string name){
	int length = name.length();
	for(int i=0;i<length;i++){
		if(name[i]<'A' || name[i]>'z'){
			if(name[i]!=' ')
			return false;
		}
	}
	return true;
}
bool valid_email(string email){
	int length = email.length();
	bool valid = true;
	for(int i=0;i<length;i++){
			if(email[i]=='@'){
			valid = true;
		}
		if(email[i]<'A' || email[i]>'z'){
			valid = false;
			return false;
		}
	}
	return valid;
}
class Name{
	protected:
		string name,email;
	public:
		void get_name(){
			cout<<"Enter Name: "<<endl;
			getline(cin,name);
			while(!valid_length(name) || !valid_values(name)){
				cout<<"Something Went Wrong: Enter Name Again: "<<endl;
				getline(cin,name);
			}
		}
		void get_email(){
			cout<<"Enter Email: "<<endl;
			getline(cin,email);
			while(!valid_email(email)){
				cout<<"Please Provide @ in email.Enter Again: "<<endl;
				getline(cin,email);
			}
		}
		void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"Email: "<<email<<endl;
		}
};
int main(){
	Name n;
	n.get_name();
	n.get_email();
	n.show();
}
