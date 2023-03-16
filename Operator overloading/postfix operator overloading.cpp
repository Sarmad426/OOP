#include<iostream>
using namespace std;
class Count{
	private:
		int counter;
	public:
		Count(){
			counter = 0;
		}
		void show(){
			cout<<"The value is: "<<counter<<endl;
		}
		// Prefix Increment Overloading
		Count operator ++(){
			Count temp;
			counter+=1;
			temp.counter = counter;
			cout<<"Prefix Increment: "<<endl;
			return temp;
		}
		// Prefix decrement operator
		Count operator --(){
			Count temp;
			counter-=1;
			temp.counter = counter;
			cout<<"Prefix Decrement: "<<endl;
			return temp;
		}
		// Postfix Increment Overloading
		Count operator ++(int){
			Count temp;
			counter+=1;
			temp.counter = counter;
			cout<<"Postfix Increment: "<<endl;
			return temp;
		} 
		// Postfix Decrement Operator
		Count operator --(int){
			Count temp;
			counter-=1;
			temp.counter = counter;
			cout<<"Postfix Decrement: "<<endl;
			return temp;
		}
};

int main(){
	Count obj;
	obj.show();
	++obj;
	obj.show();
	obj++;
	obj.show();
	--obj;
	obj.show();
	obj--;
	obj.show();
}
