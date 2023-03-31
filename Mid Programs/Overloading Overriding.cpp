#include <iostream>
using namespace std;
void test(int var)
{
	cout << "Integer number: " << var << endl;
}
void test(float var)
{
	cout << "Float number: "<< var << endl;
}
void test(int var1, float var2)
{
	cout << "Integer number: " << var1;
	cout << " and float number:" << var2;
}
int main()
{
	int a = 5;
	float b = 5.5;
	test(a);
	test(b);
	test(a, b);

	return 0;
}

