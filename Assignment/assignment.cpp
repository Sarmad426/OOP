#include <iostream>
using namespace std;
class Parent1 {
	public:
		int value = 3;
	    int operator-(int num) {
	        num -= value;
	        cout<<"Value after Minus Operation: \t";
	        return num; 
	    }
	    string operator>(int num) {
	        bool oper = num > value;
	        string result;
	        return result = oper == 1 ? "Value is Greater than num: " : "Value is Less than num";
	    }
	    string operator==(int num) {
	    	bool oper = value == num;
	        string result;
	        return result = oper == 1 ? "Value is equal to num: " : "Value is not equal to num";
	    }
};
class Parent2{
	public:
};
class Derived: public Parent1 , public Parent2{
	protected:
	int value1;	
	public:
		void getValues(Derived obj[]){
			for(int i=0;i<5;i++){
				cout<<"Enter value1: "<<endl;
				cin>>obj[i].value1;
			}
			cout<<"\nValues Taken SuccessFully: \n"<<endl;
		}
	Derived Calculate(Derived obj[]){
		Derived operate;
		for(int i=0;i<5;i++){
			cout<<operate.operator-(obj[i].value1)<<endl;
			cout<<operate.operator==(obj[i].value1)<<endl;
			cout<<operate.operator>(obj[i].value1)<<endl;	
		}
	}
	Derived get_max_value_object(Derived obj[]){
		int max = obj[0].value1;
		for(int i=1;i<5;i++){
			if(max<obj[i].value1){
				max = obj[i].value1;
			}
		}
		for(int i=0;i<5;i++){
			if(max == obj[i].value1){
				cout<<"The Highest Value object is: obj["<<i<<"]"<<endl;
				cout<<"Highest Value Among these objects is: "<<max<<endl;
				return obj[i];
			}else{
				if(i==4){
				cout<<"The Highest Value object is: obj[0]"<<endl;
				cout<<"Highest Value Among these objects is: "<<max<<endl;	
				}
			}
		}
	}
};
int main() {
	Derived *ptr_obj;
	Derived obj[5];
	ptr_obj->getValues(obj);
	ptr_obj->Calculate(obj);
	ptr_obj->get_max_value_object(obj);
}

