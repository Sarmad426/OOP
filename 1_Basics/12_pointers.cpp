#include <iostream>
using namespace std;

int main() {
    int num = 10; // declare an integer variable
    int *ptr = &num; // declare a pointer and assign the address of 'num' to it

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored at ptr: " << *ptr << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    *ptr = 20; // modify the value of 'num' using the pointer

    cout << "Modified value of num: " << num << endl;
}