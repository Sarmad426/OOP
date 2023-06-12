#include<iostream>
using namespace std;
class Parent{
    public:
        virtual void show(){
            cout<<"Parent Class: "<<endl;
        }
};
class Child1: public Parent{
    public:
        void show(){
            cout<<"Child Class1: "<<endl;
        }
};
class Child2: public Parent{
    public:
        void show(){
            cout<<"Child Class2: "<<endl;
        }
};
int main(){
    Parent *ptr[5];
    int op,i;
    cout<<"Enter 1 for parent, 2 for child1 , 3 for child2: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"Which object to create: "<<endl;
        cin>>op;
        if(op==1)
            ptr[i] = new Parent;
        else if(op==2)
            ptr[i] = new Child1;
        else
            ptr[i] = new Child2;
    }
    for(i=0;i<5;i++){
        ptr[i]->show();
    }
}