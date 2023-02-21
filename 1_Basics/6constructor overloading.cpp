#include<iostream>
using namespace std;
class Book{
private:
    string name, author,rating;
public:
    Book(){
    name = "No name";
    author = "No author";
    rating = "No rating";
    }
    Book(string aName,string aAuthor,string aRating){
        name = aName;
        author = aAuthor;
        rating = aRating;
    }
    void display_values(){
    cout<<"Title: "<<name<<endl;
    cout<<"Author:"<<author<<endl;
    cout<<"Rating: "<<rating<<endl;
    }
};
int main(){
    Book book1, book2("Harry Potter","Logan Paul","3.7");
    book1.display_values();
    book2.display_values();
}
