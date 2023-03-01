/*
    A program in C++ using a class to store name , age , address and roll no of 10 students.
    write a function that will display the details of students having even roll no.
    write another function that will display the details of students who have age 14.
    write another function that will display the details of student whoose roll no is entered by the user.
*/
#include<iostream>
using namespace std;
class Student{
	public:
    string name,address;
    static int r_no;
    int roll_no, age;
Student(){
r_no++;
roll_no = r_no;
cout<<r_no<<endl;
}
};
void age_14(Student student[],int array_size){
	cout<<endl<<"Students With Age 14: "<<endl;
    for(int i=0;i<array_size;i++){
        if(student[i].age == 14){
            cout<<"Name: "<<student[i].name<<endl;
            cout<<"Roll No: "<<student[i].roll_no<<endl;
            cout<<"Age: "<<student[i].age<<endl;
            cout<<"Address: "<<student[i].address<<endl;
        }
    }
}
void even_roll_no(Student student[],int array_size){
	cout<<endl<<"Students With Even Roll no: "<<endl;
    for(int i=0;i<array_size;i++){
        if(student[i].roll_no %2 ==0){
            cout<<"Name: "<<student[i].name<<endl;
            cout<<"Roll No: "<<student[i].roll_no<<endl;
            cout<<"Age: "<<student[i].age<<endl;
            cout<<"Address: "<<student[i].address<<endl;
        }
    }
}
void display_details(Student student[],int array_size,int input_roll){
	cout<<endl<<"Details of Student will Roll no: "<<input_roll<<endl;
    for(int i=0;i<array_size;i++){
        if(student[i].roll_no == input_roll){
            cout<<"Name: "<<student[i].name<<endl;
            cout<<"Roll No: "<<student[i].roll_no<<endl;
            cout<<"Age: "<<student[i].age<<endl;
            cout<<"Address: "<<student[i].address<<endl;
        }
    }
}
int Student::r_no;
int main(){
    int array_size = 10;
    string names[array_size] = {"Sarmad","Akmal","Nawaz","Babar","Shaheen","Sajjad","Ijaz","Shadab","Wasim","Haris"};
    string address[array_size] = {"Johar Town","Anarkali","Shadiwal","Bahria Town","Valencia Town","Raiwand","Karachi","Islamabad","Rawalpindi","Washington"};
    int age[array_size] = {14,20,21,22,23,21,20,18,14,19};
    Student student[array_size];
    for(int i=0;i<array_size;i++){
        student[i].name = names[i];
        student[i].address = address[i];
        student[i].age
		 = age[i];
    }
    age_14(student,array_size);
    even_roll_no(student,array_size);
    int input_roll_no;
    cout<<"Enter Roll no of Student to get its Details: "<<endl;
    cin>>input_roll_no;
    display_details(student,array_size,input_roll_no);
}
