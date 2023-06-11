#include<iostream>
using namespace std;
class Person{
    protected:
        string name,address;
        int id;
    public:
        Person(){
            id = 1;
            name = "No name";
            address = "No address";
        }
        void input(){
            cout<<"Enter id: "<<endl;
            cin>>id;
            cout<<"Enter your name: "<<endl;
            cin>>name;
            cout<<"Enter Address: "<<endl;
            cin>>address;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
            cout<<"id: "<<id<<endl;
            cout<<"Address: "<<address<<endl;
        }
};
class Student: public Person{
    private:
        int roll_no, marks;
    public:
        void input(){
            Person::input();
            cout<<"Enter Roll no: "<<endl;
            cin>>roll_no;
            cout<<"Enter marks: "<<endl;
            cin>>marks;
        }
        void show(){
            Person::show();
            cout<<"Roll No:"<<roll_no<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
class Scholarship: public Student{
    private:
        string scholarship_name;
        int amount;
    public:
        void input(){
            Student::input();
            cout<<"Enter Scholarship name: "<<endl;
            cin>>scholarship_name;
            cout<<"Enter amount: "<<endl;
            cin>>amount;
        }
        void show(){
            Student::show();
            cout<<"Scholarship :"<<scholarship_name<<endl;
            cout<<"Amount: "<<amount<<endl;
        }
};
int main(){
    Scholarship sch;
    sch.input();
    sch.show();
}