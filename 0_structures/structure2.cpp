/*
    A Program to store the roll no. starting from 1 name and age
    of 5 students and then print the details of student with roll no 2.
*/
#include<iostream>
using namespace std;
int main(){
    struct Students{
        string name;
        int roll_no;
        int age;
    };
    Students student[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Name of Student: "<<endl;
        cin>>student[i].name;
        cout<<"Enter Roll no of Student: "<<endl;
        cin>>student[i].roll_no;
        cout<<"Enter age of Student: "<<endl;
        cin>>student[i].age;
    }
    for(int i=0;i<5;i++){
        if(student[i].roll_no ==2){
            cout<<"Name: "<<student[i].name<<endl;
            cout<<"Roll No: "<<student[i].roll_no<<endl;
            cout<<"Age: "<<student[i].age<<endl;
        }
    }
}

