#include<iostream>
using namespace std;
class Student{
private:
    string name;
    float gpa;
    int roll_no;
    static int r_no;
public:
    Student(){
    roll_no++;
    r_no = roll_no;
    }
    void get_details(){
    cout<<"Enter Student Name: "<<endl;
    cin>>name;
    cout<<"Enter Gpa: "<<endl;
    cin>>gpa;
    }
    void display_values(){
    cout<<"Name: "<<name<<endl;
    cout<<"Gpa: "<<gpa<<endl;
    cout<<"Roll No: "<<r_no<<endl;
    }
};
int Student::r_no = 0;
int main(){
    Student student[3];
    student[0].get_details();
    student[1].get_details();
    student[2].get_details();
    student[3].get_details();
    cout<<endl<<endl<<"Displaying Details: "<<endl;
    student[0].display_values();
    student[1].display_values();
    student[2].display_values();
    student[3].display_values();
}
