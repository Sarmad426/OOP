#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file_data("test.txt");
    if (!file_data) {
        cout<< "Error opening the file." <<endl;
    }
   	string line;
   	cout<<"Content of the File: \n";
	getline(file_data, line);
    cout <<"\t"<< line <<endl;
    file_data.close();
}

