#include <iostream>
#include <string>
using namespace std;

class Users;

class Products {
private:
    string name;
    int stock;
    float price;
public:
    Products(string n = "", int s = 0, float p = 0) : name(n), stock(s), price(p) {}
    void display() {
        cout << "Product: " << name << ", Stock: " << stock << ", Price: " << price << endl;
    }
    friend void product_update(Products &p, Users &u);
};

class Users {
private:
    string name;
    string type;
public:
    Users(string n = "", string t = "") : name(n), type(t) {}
    friend void product_update(Products &p, Users &u);
};

void product_update(Products &p, Users &u) {
    if (u.type == "admin") {
        string new_name;
        cout << "Enter new name: ";
        cin >> new_name;
        p.name = new_name;
        cout << "Product updated successfully!" << endl;
    }
    else {
        cout << "You do not have permission to update products." << endl;
    }
}

int main() {
    Users admin("admin", "admin");
    Users reg_user("John", "regular");

    Products apple("Apple", 10, 1.5);
    Products banana("Banana", 5, 0.75);
    Products orange("Orange", 7, 1.25);

    cout << "Initial products:" << endl;
    apple.display();
    banana.display();
    orange.display();

    cout << endl << "Update products:" << endl;
    product_update(apple, admin);
    product_update(banana, reg_user);
    product_update(orange, admin);

    cout << endl << "Final products:" << endl;
    apple.display();
    banana.display();
    orange.display();

    return 0;
}

