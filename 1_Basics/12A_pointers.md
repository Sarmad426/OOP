The purpose of using pointers in a program is to manipulate memory directly and efficiently. Pointers allow you to store the memory address of a variable, which gives you the ability to access and modify the value stored at that address.

Here's an example in C++ to demonstrate the use of pointers:

```cpp
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

    return 0;
}
```

In this example, we declare an integer variable `num` and assign it a value of 10. We then declare a pointer `ptr` and assign the address of `num` to it using the `&` operator. We can access the value stored at the address pointed to by `ptr` using the `*` operator.

In the output, you will see the value of `num`, the address of `num`, the value stored at `ptr`, and the address stored in `ptr`. After modifying the value of `num` through the pointer, you will see the updated value of `num` in the output.