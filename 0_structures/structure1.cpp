/*
	Enter the marks of 5 students in Chemistry. Math and physics using a structure named
	marks having element roll_no,name, chem_marks, math_marks and phy_marks and then display
	the percentage of each student.
*/

#include<iostream>
using namespace std;
struct marks{
    string name;
    int roll_no;
    int chem_marks, math_marks, phy_marks;
};
int main(){
    marks student[5];
    for(int i=0;i<5;i++){
        cout<<"Enter name of Student "<<i + 1 <<endl;
        cin>>student[i].name;
        cout<<"Enter Roll No of "<<student[i].name<<endl;
        cin>>student[i].roll_no;
        cout<<"Enter marks in Math of "<<student[i].name<<endl;
        cin>>student[i].math_marks;
        cout<<"Enter marks in Physics of "<<student[i].name<<endl;
        cin>>student[i].phy_marks;
        cout<<"Enter marks in Chemistry of "<<student[i].name<<endl;
        cin>>student[i].chem_marks;
    }
    for(int i=0;i<5;i++){
        int sum = student[i].math_marks + student[i].chem_marks + student[i].phy_marks;
        float percentage = ( sum / 300.0) * 100;
        cout<<student[i].roll_no<<". "<<student[i].name<<" "<<percentage<<"%"<<endl;
    }
}
