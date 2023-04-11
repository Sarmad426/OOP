#include<iostream>
using namespace std;
class Account{
	protected:
		string name,user_name,email,password1,password2;
		int id;
		static int u_id;		
	public:
		Account(){
			name = "No name";
			u_id +=1;
			id = u_id;
		}
		void sign_up(){
			cout<<"Enter Full Name: "<<endl;
			getline(cin,name);
			cout<<"Enter User Name: "<<endl;
			cin>>user_name;
			cout<<"Enter Email: "<<endl;
			cin>>email;
			cout<<"Enter Password: "<<endl;
			cin.ignore();
			getline(cin,password1);
			cout<<"Repeat Password: "<<endl;
			getline(cin,password2);
			while(password1!=password2){
			cout<<"Your Password Didn't match the previous one: "<<endl;
			cout<<"Enter again: "<<endl;
			getline(cin,password2);
			}
		}
		void details(){
			cout<<"\nPersonal Details: "<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"User Name: "<<user_name<<endl;
			cout<<"Email: "<<email<<endl;
		}
};
int Account::u_id=0;
int main(){
	Account ac1;
	ac1.sign_up();
	ac1.details();
}

