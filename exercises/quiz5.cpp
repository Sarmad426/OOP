#include <iostream>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        int age;
        string address;
        int rollNo;
};

void displayEvenRoll(Student students[], int size) {
    cout << "Students with even roll no:\n";
    for (int i = 0; i < size; i++) {
        if (students[i].rollNo % 2 == 0) {
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << endl;
        }
    }
}

void displayAge14(Student students[], int size) {
    cout << "Students with age 14:\n";
    for (int i = 0; i < size; i++) {
        if (students[i].age == 14) {
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << endl;
        }
    }
}

void displayRollNo(Student students[], int size, int roll) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (students[i].rollNo == roll) {
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            cout << "Roll No: " << students[i].rollNo << endl;
            cout << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll no " << roll << " not found.\n";
    }
}

int main() {
    const int SIZE = 10;
    Student students[SIZE];

    // Populate the student details
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter details of student " << i+1 << endl;
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
        cin.ignore(); // Ignore the newline character in the input buffer
        cout << "Address: ";
        getline(cin, students[i].address);
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cin.ignore(); // Ignore the newline character in the input buffer
        cout << endl;
    }

    // Call the display functions
    displayEvenRoll(students, SIZE);
    displayAge14(students, SIZE);

    int roll;
    cout << "Enter roll no to search: ";
    cin >> roll;
    displayRollNo(students, SIZE, roll);

    return 0;
}
