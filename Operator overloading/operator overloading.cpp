#include<iostream>
using namespace std;
class Count{
	private:
		int counter;
	public:
		Count(){
			counter = 0;	
		}
		void operator ++(){
			counter+=1;
		}
		void operator --(){
			counter-=1;
		}
		void display(){
			cout<<"The Counter is: "<<counter<<"\n";
		}
};
int main(){
	Count obj;
	obj.display();
	++obj;
	obj.display();
	--obj;
	obj.display();
}
