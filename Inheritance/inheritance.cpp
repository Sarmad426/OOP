#include<iostream>
using namespace std;
class Vehicle{
	public: 
	string brand;
	void details(){
		cout<<"Brand:"<<brand<<endl;
	}
};
class Car : public Vehicle {
	public:
		string model;
		Car(string Brand,string Model){
			brand = Brand;
			model = Model;
		}
		void details(){
			cout<<"Brand: "<<brand<<endl;
			cout<<"Car Name: "<<model<<endl;
		}
};
int main(){
	Car civic("Honda","Civic");
	civic.details();
}
