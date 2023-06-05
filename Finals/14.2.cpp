#include<iostream>
using namespace std;
class Operate{
    private:
        int n;
    public:
        Operate(){
            n = 0;
        }
        void show(){
            cout<<"n = "<<n<<endl;
        }
        Operate operator ++(){
            Operate temp;
            n =  n + 1;
            temp.n = n;
            return temp;
        }
};
int main(){
    Operate a,b;
    a.show();
    b.show();
    b = ++a;
    a.show();
    b.show();
}
