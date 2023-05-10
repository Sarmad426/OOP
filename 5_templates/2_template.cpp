#include<iostream>
using namespace std;
// A program that adds two numbers using templates
template <class Add>
Add add(Add num1,Add num2){
	return num1 + num2;
}
int main(){
	int num1 = 11,num2 = 5;
	int result = add(num1,num2);
	cout<<"Sum is: "<<result<<endl;
}
