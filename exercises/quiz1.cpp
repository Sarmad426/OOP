/*
    A Program to store the roll no. starting from 1 name and age
    of 5 students and then print the details of student with roll no 2.
*/
#include<iostream>
using namespace std;
    class Students{
    public:
        string name;
        int roll_no , age;
        Students(string aName, int aAge,int aRoll_no){
            name = aName;
            age = aAge;
            roll_no = aRoll_no;
            if(roll_no == 2){
            cout<<"Name: "<< name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll No: "<<roll_no<<endl;
        }
        }
    };
int main(){
    Students student1("Sarmad",18,1);
    Students student2("Naveed",19,2);
    Students student3("Mosh",20,3);
    Students student4("Hamedani",19,4);
    Students student5("Akmal",21,5);
}
