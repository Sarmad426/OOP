#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream file1("test.txt");
	string name,content;
	cout<<"Enter Your Full Name: "<<endl;
	getline(cin,name);
	file1<<"Name: "<<name<<endl;
	file1<<"Age: "<<19<<endl;
	ifstream file("test.txt");
	getline(file,content);
	cout<<"Content: "<<content<<endl;
}
