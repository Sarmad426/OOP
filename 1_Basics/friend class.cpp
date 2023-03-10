// Friend Class Program
// A Friend Class Can access all the private Members of another class in which it is defined.
#include<iostream>
using namespace std;
class Student{
private:
string name;
int roll_no;
float grade;
public:
Student(string u_name,int aroll_no,float
agrade){
name = u_name;
roll_no = aroll_no;
grade = agrade;
}
friend class Student1;
};
class Student1{
public:
void details(Student student){
cout<<"Name: "<<student.name<<endl;
cout<<"Roll No: "<<student.roll_no<<endl;
cout<<"Grade: "<<student.grade<<endl;
}
};
int main(){
Student student("Salman",1,3.5);
Student1 student1;
student1.details(student);
}
