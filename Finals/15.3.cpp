#include<iostream>
using namespace std;
class Person{
    protected:
        int id;
        string name;
        string address;
    public:
        Person(){
            id = 0;
            name = "No name";
            address = "no address";
        }
        void input(){
            cout<<"Enter id: "<<endl;
            cin>>id;
            cout<<"Enter name: "<<endl;
            cin>>name;
            cout<<"Enter Address: "<<endl;
            cin>>address;
        }
        void display(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
        }
};
class Student: public Person{
    private:
        int roll_no;
        int marks;
    public:
        Student(){
            roll_no = 0;
            marks = 0;
        }
        void get_details(){
            cout<<"Enter Roll no: "<<endl;
            cin>>roll_no;
            cout<<"Enter marks: "<<endl;
            cin>>marks;
        }
        void show_details(){
            cout<<"Roll No: "<<roll_no<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main(){
    Student s1;
    s1.input();
    s1.get_details();
     s1.display();
    s1.show_details();
}