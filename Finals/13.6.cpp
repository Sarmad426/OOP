#include<iostream>
using namespace std;
class Array{
	private:
		int arr[5];
	public:
		void fill();
		void display();
		int max();
		int min();
};
void Array::fill(){
	for(int i=0;i<5;i++){
		cout<<"Enter value: "<<i+1<<endl;
		cin>>arr[i];	
	}	
}
void Array::display(){
	for(int i=0;i<5;i++){
		cout<<"value: "<<i+1<<" = "<<arr[i]<<endl;	
	}
}
int Array::max(){
	int max = arr[0];
	for(int i=0;i<5;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}
int Array::min(){
	int min = arr[0];
	for(int i=0;i<5;i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	return min;
}
int main(){
	Array obj;
	obj.fill();
	obj.display();
	cout<<"Max value is: "<<obj.max()<<endl;
	cout<<"Min value is: "<<obj.min()<<endl;
}
