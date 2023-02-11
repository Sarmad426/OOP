#include<iostream>
using namespace std;
int main(){
    struct book{
    string name;
    int pages,price;
    };
    book book[5];
    for(int i=0;i<5;i++){
            cout<<"Enter Name of the Book: "<<endl;
            cin>>book[i].name;
            cout<<"Enter Number of Pages: "<<endl;
            cin>>book[i].pages;
            cout<<"Enter Price of Book: "<<endl;
            cin>>book[i].price;
    }
    int max = book[0].price,index ;
    for(int i=0;i<5;i++){
        if(book[i].price > max){
            max = book[i].price;
            index = i;
        }
    }
    cout<<"Name: "<<book[index].name<<endl;
    cout<<"Pages: "<<book[index].pages<<endl;
    cout<<"Price: "<<book[index].price<<endl;
}
