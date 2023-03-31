#include<iostream>
using namespace std;
bool valid_email(string email){
	bool valid = false;
	int length = email.length();
	for(int i=0;i<=length;i++){
		if(email[i]=='@'){
			valid = true;
			break;
		}
	}
	return valid;
}
bool valid_password(string password){
	bool valid = false;
	int length = password.length();
	for(int i=0;i<length;i++){
		if(int(password[i])<'A' || int(password[i])>'z'){
			valid = true;
			break;
		}
	}
	return valid;
}
string encrypt_password(string password){
	int length = password.length();
	char new_password[length];
	for(int i=0;i<length;i++){
		new_password[i] = int(password[i]) + 53;
	}
	for(int i=0;i<length;i++){
		password[i] = new_password[i];
	}
	return password;
}
class Account{
	protected:
		string name,email;
		string password,enc_password;
		int id;
		static int u_id;
	public:
		Account(){
			name = "No name";
			email = "name@example.com";
			u_id+=1;
			id = u_id;
		}
		void get_name(){ 
			cout<<"Enter Your Name: "<<endl;
			getline(cin,name);
			if(name.length()<5){
				cout<<"Name Must be at least of 5 characters: "<<endl;	
				get_name();
			}
		}
		void get_email(){
			cout<<"Enter Your Email: "<<endl;
			getline(cin,email);
			if(valid_email(email)){
			}
			else{
				cout<<"Email Must have @ in it: "<<endl;
				get_email();
			}
		}
		void get_password(){
			cout<<"Enter Password: "<<endl;
			getline(cin,password);
			if(password.length()<8){
				cout<<"Password Must have at least 8 characters: "<<endl;
				get_password();
			}
			if(valid_password(password)){
				enc_password = encrypt_password(password);
		}else{
			cout<<"Password must have some special characters: "<<endl;
			get_password();	
		}
	}
		void details(){
			cout<<"\nAccount Details: "<<endl<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Email: "<<email<<endl;
			cout<<"Password: "<<enc_password<<endl;
		}
		void create_account(){
			get_name();
			get_email();
			get_password();
			cout<<"\nAccount Created Successfully: \n";
		}
};
int Account::u_id = 0;
int main(){
	Account person;
	person.create_account();
	person.details();
}
