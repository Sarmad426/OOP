#include<iostream>
using namespace std;

class Fv{
    private:
        string name;
    public:
        void input(){
            cout<<"Enter Your name: "<<endl;
            cin>>name;
        }
        void show(){
            cout<<"Name: "<<name<<endl;
        }
};
int main(){
    Fv *ptr_array[3];
    ptr_array[0] = new Fv;
    ptr_array[1] = new Fv;
    ptr_array[2] = new Fv;
    ptr_array[0]->input();
    ptr_array[0]->show();
    ptr_array[1]->input();
    ptr_array[1]->show();
    ptr_array[2]->input();
    ptr_array[2]->show();
}