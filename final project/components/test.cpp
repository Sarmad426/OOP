#include<iostream>
using namespace std;
string valid_length(string name){
	char c_name[12] = name; 
	while(name.length()<3){
		cout<<"First Name must be of 3 characters: "<<endl;
		cin>>name;
	}
	return name;
}
class Account{
	private:
		string name;
	public:
		void get_name(){
			cout<<"Enter First Name: "<<endl;
			cin>>name;
			name = valid_length(name);
		}
		void show(){
			cout<<"Name: "<<name<<endl;
		}
};
int main(){
	Account a;
	a.get_name();
	a.show();
}
