#include<iostream>
using namespace std;
class Computer{
    protected:
        int word_size,memory_size,speed;
        double storage_size;
    public:
        Computer(){}
        Computer(int w_size,int mem_size,int speed,double stg_size){
            word_size = w_size;
            memory_size =  mem_size;
            this->speed = speed;
            storage_size = stg_size;
        }
        void show(){
            cout<<"Computer Specs: "<<endl;
            cout<<"\tWord Size: "<<word_size<<endl;
            cout<<"\tMamory Size: "<<memory_size<<endl;
            cout<<"\tSpeed: "<<speed<<endl;
            cout<<"\tStorage Size: "<<storage_size<<endl;
        }
};
class Laptop: public Computer{
        double length,width,height,weight;
    public:
        Laptop(){}
        Laptop(double length,double width,double height,double weight){
            this->length = length;
            this->width = width;
            this->height =  height;
            this->weight = weight;
        }
        void show(){
            cout<<endl<<"Laptop Specs: "<<endl;
            cout<<"\tLength: "<<length<<endl;
            cout<<"\tWidth: "<<width<<endl;
            cout<<"\tHeight: "<<height<<endl;
            cout<<"\tWeight: "<<weight<<endl;
        }
};
int main(){
    Computer comp(32,256,55,64);
    Laptop lap(24,48,30,32);
    comp.show();
    lap.show();
}