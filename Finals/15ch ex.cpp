// teacher class , name , age , address , input(), display(), class author
#include<iostream>
using namespace std;
class Teacher{
    protected:
        string name,address;
        int age;
    public:
        void input(){
            cout<<"Enter Your name: "<<endl;
            cin>>name;
            cout<<"Enter your age: "<<endl;
            cin>>age;
            cout<<"Enter Your address: "<<endl;
            cin>>address;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
        }
};
class Author{
    protected:
        string name,address;
        int books;
    public:
         void input(){
            cout<<"Enter Your name: "<<endl;
            cin>>name;
            cout<<"Enter Your address: "<<endl;
            cin>>address;
            cout<<"Enter Number of Books Published: "<<endl;
            cin>>books;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Books: "<<books<<endl;
        }
};
class Scholar: public Teacher, public Author{
    public:
         void input(){
            cout<<"Enter Your name: "<<endl;
            cin>>Teacher::name;
            cout<<"Enter your age: "<<endl;
            cin>>Teacher::age;
            cout<<"Enter Your address: "<<endl;
            cin>>Teacher::address;
            cout<<"Enter Number of Books Published: "<<endl;
            cin>>Author::books;
        }
        void display(){
            cout<<"Name: "<<Teacher::name<<endl;
            cout<<"Age: "<<Teacher::age<<endl;
            cout<<"Address: "<<Teacher::address<<endl;
            cout<<"Books: "<<Author::books<<endl;
        }
};
int main(){
    Scholar th_baig;
    th_baig.input();
    th_baig.display();
}