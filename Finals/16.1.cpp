#include<iostream>
using namespace std;

class Fv{
    private:
        int num;
    public:
        void input(){
            cout<<"Enter a number: "<<endl;
            cin>>num;
        }
        void show(){
            cout<<"A: "<<num<<endl;
        }
};
int main(){
    Fv *ptr;
    ptr = new Fv;
    ptr->input();
    ptr->show();
}