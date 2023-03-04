#include <iostream>
using namespace std;
/*
	A friend function can access the private and protected data of a class. 
	We declare a friend function using the friend keyword inside the body of the class.
*/
class MyClass {
private:
  int myPrivateVar;
public:
  void setValue(int value)  { 
  myPrivateVar = value; 
  }
  friend void printValue(MyClass obj);
};

void printValue(MyClass obj) {
  cout << "The value is: " << obj.myPrivateVar << endl;
}

int main() {
  MyClass obj;
  obj.setValue(67);
  printValue(obj);
}

