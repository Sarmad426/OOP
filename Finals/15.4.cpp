#include<iostream>
using namespace std;
class Simple{
    private:
        int a,b;
    public:
    Simple(){
        a = b = 0;
    }
    void input(){
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void add(){
        cout<<"Addition: "<<a+b<<endl;
    }
    void sub(){
        cout<<"Subtraction: "<<a-b<<endl;
    }
    void div(){
        cout<<"Division: "<<a/b<<endl;
    }
    void mul(){
        cout<<"Multiplication: "<<a*b<<endl;
    }
};
class Complex : public Simple{
    public:
        void add(){
            if(a>0 && b>0){
                Simple::add();
            }
        }
         void sub(){
            if(a>0 && b>0){
                Simple::sub();
            }
        }
         void div(){
            if(a>0 && b>0){
                Simple::div();
            }
        }
         void mul(){
            if(a>0 && b>0){
                Simple::mul();
            }
        }
};
int main(){
    Complex cpl;
    cpl.input();
    cpl.add();
    cpl.sub();
    cpl.mul();
    cpl.div();
}