/*
    write a C++ program to store the roll no,name and age (between 11 to 14 )
     and address of students (more than 10). Store the information of students.
      write a function to print the names of all students having age 14.
      Write another function to print the names of all student having even roll no.
      Write another function to display the details of the student whose roll
       no is given/ entered by the user.
*/
#include<iostream>
using namespace std;
struct Students{
string name,address;
int age,roll_no;
};
void getDetails(int roll){
}
void getEvenRollNo(){
}
void age14(){
}
int main(){
// I am hard coding all of these values so that i don't have to pass too
// much data to see program execution.
Students student[10];
// Student 1
    student[0].name = "Akmal";
    student[0].age = 13;
    student[0].roll_no = 1;
    student[0].address = "Shalimar";
// Student 2
    student[1].name = "Ahmad";
    student[1].age = 11;
    student[1].roll_no = 2;
    student[1].address = "Lahore";
// Student 3
    student[2].name = "Naveed";
    student[2].age = 13;
    student[2].roll_no = 3;
    student[2].address = "Karachi";
// Student 4
    student[3].name = "Babar";
    student[3].age = 12;
    student[3].roll_no = 4;
    student[3].address = "Lahore";
// Student 5
    student[4].name = "Shadab";
    student[4].age = 14;
    student[4].roll_no = 5;
    student[4].address = "MianWali";
// Student 6
    student[5].name = "Iftikhar";
    student[5].age = 13;
    student[5].roll_no = 6;
    student[5].address = "Lahore";
// Student 7
    student[6].name = "Aslam";
    student[6].age = 14;
    student[6].roll_no = 7;
    student[6].address = "Peshawar";
// Student 8
    student[7].name = "Saleem";
    student[7].age = 12;
    student[7].roll_no = 8;
    student[7].address = "Islamabad";
// Student 9
    student[8].name = "Adnan";
    student[8].age = 14;
    student[8].roll_no = 9;
    student[8].address = "FaisalAbad";
// Student 10
    student[9].name = "Kamal";
    student[9].age = 13;
    student[9].roll_no = 10;
    student[9].address = "Patoki";
void getDetails(int roll){
 cout<<"Enter Roll No of Student To see its Details: "<<endl;
     for(int i=0;i<10;i++){
        if(roll == student[i].roll_no){
            cout<<"Name: "<<student[i].name<<endl;
            cout<<"Age: "<<student[i].age<<endl
            cout<<"Roll No: "<<student[i].roll_no<<endl;
            cout<<"Address: "<<student[i].address<<endl;
        }
     }
}
void getEvenRollNo(){
     cout<<"Students With Even Roll No: "<<endl;
     for(int i=0;i<=10;i++){
       if(student[i].roll_no % 2 == 0){
        cout<<"Name: "<<student[i].name<<endl;
       }
    }
}
void age14(){
cout<<"Students With Age 14: "<<endl;
    for(int i=0;i<=10;i++){
       if(student[i].age ==14){
        cout<<"Name: "<<student[i].name<<endl;
       }
    }
}
age14();
    getEvenRollNo();
    getDetails(3);
}
