#include<iostream>
using namespace std;
class Person{
	public:
    string name,account_no;
    float balance;
};
void balance_200(Person persons[],int array_size){
	cout<<endl<<"People With Balance less than $200: "<<endl;
    for(int i=0;i<array_size;i++){
        if(persons[i].balance < 200){
            cout<<"Name: "<<persons[i].name<<endl;
            cout<<"Account No: "<<persons[i].account_no<<endl;
            cout<<"Address: "<<persons[i].balance<<endl;
            cout<<endl;
        }
    }
}
void add_100(Person persons[],int array_size){
	cout<<endl<<"People Having bonus of $100: "<<endl;
    for(int i=0;i<array_size;i++){
        if(persons[i].balance >= 1000.0){
        	persons[i].balance += 100.0;
            cout<<"Name: "<<persons[i].name<<endl;
            cout<<"Account No: "<<persons[i].account_no<<endl;
            cout<<"New Balance: "<<persons[i].balance<<endl;
            cout<<endl;
        }
    }
}

int main(){
    int array_size = 10;
    string names[array_size] = {"Sarmad","Akmal","Nawaz","Babar","Shaheen","Sajjad","Ijaz","Shadab","Wasim","Haris"};
    string account_no[array_size] = {"MX14","MY32","SH54","MT34","VT90","RP12","KX34","ID34","RD98","NF54"};
    int balance[array_size] = {1400,120,210,250,140,210,190,290,1800,1920};
     Person person[array_size];
    for(int i=0;i<array_size;i++){
        person[i].name = names[i];
        person[i].account_no = account_no[i];
        person[i].balance = balance[i];
    }
    add_100(person,array_size);
    balance_200(person,array_size);
}
