#include<iostream>
using namespace std;
class Circle{
	public:
		float radius;
		Circle(float Rad){
			radius = Rad;
		}
};
// This Function takes an object as a parameter
circum(Circle circle){
	float result = 2 * 3.14 * circle.radius;
	cout<<"Circumference: "<<result<<endl;
}
int main(){
	Circle circle(8.25);
	// Passing Object to a function.
	circum(circle);
}

