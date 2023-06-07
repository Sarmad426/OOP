#include<iostream>
using namespace std;
class Simple{
    protected:
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
            }else{
                cout<<"Invalid Value: "<<endl;
            }
        }
         void sub(){
            if(a>0 && b>0){
                Simple::sub();
            }else{
                cout<<"Invalid Value: "<<endl;
            }
        }
         void div(){
            if(a>0 && b>0){
                Simple::div();
            }else{
                cout<<"Invalid Value: "<<endl;
            }
        }
         void mul(){
            if(a>0 && b>0){
                Simple::mul();
            }else{
                cout<<"Invalid Value: "<<endl;
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