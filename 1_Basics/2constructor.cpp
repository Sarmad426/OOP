#include<iostream>
using namespace std;
class Book{
	public:
		string title,author;
		int pages;
		Book(){
			cout<<"Constructor Function: "<<endl;
		}
		// Constructor is a function that exist in a class with same name as class. (Uppercase)
		// A constructor has no return type it is just name of a class.
		// Constructor is automatically called when an instance of a class is creates.
		// In this case is the book object in main function. 
};
int main(){
	Book book;
}
