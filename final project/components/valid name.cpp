#include<iostream>
using namespace std;
string valid_length(string name){
	while(name.length()<6){
		cout<<name.length()<<endl;
		cout<<"Name Must be of 6 characters: "<<endl;
		getline(cin,name);
		if(name.length()>=6){
			return name;
		}
		valid_length(name);
	}
	return name;
}
bool valid_values(string name){
	for(int i=0;i<name.length();i++){
		while(name[i]<'A' || name[i]>'z'){		
			return false;
		}	
	}
	return true;
}
string valid_name(string name){
//	while(!valid_length(name)){
//		cout<<"Name Must be of 6 characters: "<<endl;
//		getline(cin,name);
//	}	
	name = valid_length(name);
//	while(!valid_values(name)){
//		cout<<"Name Must contain Alphabetical Characters: "<<endl;
//		cout<<"Enter Name Again: "<<endl;
//		getline(cin,name);
//		valid_length(name);
//	}
	return name;
}
class Name{
	protected:
		string name;
	public:
		void get_name(){
			cout<<"Enter Name: "<<endl;
			getline(cin,name);
			name = valid_name(name);
		}
};
int main(){
	Name n;
	n.get_name();
}
