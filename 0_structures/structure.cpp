#include<iostream>
using namespace std;
int main(){
struct Employee{
    string name;
    int working_hours;
    int salary;
};
Employee naveed;
naveed.name = "Naveed";
naveed.working_hours = 8;
naveed.salary = 70000;
cout<<"Name: "<<naveed.name<<endl;
cout<<"Working Hours: "<<naveed.working_hours<<endl;
cout<<"Salary: "<<naveed.salary<<endl;
}
