#include<iostream>
using namespace std;
template <class Data_Type>
Data_Type factorial(Data_Type value){
	int count = value;
	int result = 1;
	for(count;count>0;count--){
		result *= count;
	}
	return result;
}
int main(){
	int num = 5;
	cout<<"Factroial = "<<factorial(num)<<endl;
}
