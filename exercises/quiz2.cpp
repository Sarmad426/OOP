/*
	Enter the marks of 5 students in Chemistry. Math and physics using a structure named
	marks having element roll_no,name, chem_marks, math_marks and phy_marks and then display
	the percentage of each student.
*/
#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int roll_no;
		int chem_marks, phy_marks, math_marks;
		Student(string aName,int aRoll_no,int aPhy_marks,int aMath_marks,int aChem_marks){
			name = aName;
			roll_no = aRoll_no;
			phy_marks = aPhy_marks;
			math_marks = aMath_marks;
			chem_marks = aChem_marks;
			cout<<roll_no<<". "<<name<<" "<<percentage()<<"% "<<endl;
		}
		float percentage(){
				const float total = 300;
				int obtained = math_marks + chem_marks + phy_marks;
				float average = (obtained / total);
				return average * 100;
			}
};
int main(){
	Student student1("Sarmad",1,80,83,75);
	Student student2("Akmal",2,78,69,68);
	Student student3("Nawaz",3,79,64,75);
	Student student4("Ahmad",4,67,66,83);
	Student student5("Umair",5,76,90,92);
}
