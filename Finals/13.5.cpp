#include<iostream>
using namespace std;
class Result{
	private:
		string name;
		int marks[3];
	public:
		void input(){
			cout<<"Enter Your name: "<<endl;
			cin>>name;
			for(int i=0;i<3;i++){
				cout<<"Enter Marks in:"<<i+1<<" subject."<<endl;
				cin>>marks[i];	
			}
		}
		void show(){
			cout<<"Name: "<<name<<endl;
			cout<<"Marks in 1st Subject: "<<marks[0]<<endl;
			cout<<"Marks in 2nd Subject: "<<marks[1]<<endl;
			cout<<"Marks in 3rd Subject: "<<marks[2]<<endl;
		}
		void total(){
			int total_marks = 0;
			for(int i=0;i<3;i++){
				total_marks += marks[i]; 
			}
			cout<<"Total Marks: "<<total_marks<<endl;
		}
		void avg(){
			int total_marks = 0;
			float avg_marks = 3.0;
			for(int i=0;i<3;i++){
				total_marks += marks[i]; 
			}
			cout<<"Average: "<<total_marks/avg_marks<<endl;
		}
};
int main(){
	Result proto;
	proto.input();
	proto.show();
	proto.total();
	proto.avg();
}
