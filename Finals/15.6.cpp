#include<iostream>
using namespace std;
class Parent{
    int a;
    protected:
        int b;
    public:
        int c;
};
class Child : public Parent{
    public:
        void input(){
            cout<<"Enter b: "<<endl;
            cin>>b;
            cout<<"Enter c: "<<endl;
            cin>>c;
        }
        void output(){
            cout<<"b = "<<b<<endl;
            cout<<"c = "<<c<<endl;
        }
};
int main(){
    Child obj;
    obj.input();
    obj.output();
}