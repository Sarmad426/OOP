#include<iostream>
using namespace std;
class Travel{
	private:
		float kilometeres,hours;
	public:
		Travel(){
			kilometeres = 0;
			hours = 0;
		}
		void get(){
			cout<<"Enter Km: "<<endl;
			cin>>kilometeres;
			cout<<"Enter Hours: "<<endl;
			cin>>hours;
		}
		void show(){
			cout<<"Km: "<<kilometeres<<endl;
			cout<<"Hours: "<<hours<<endl;
		}
		void add(Travel tr){
			Travel tph;
			tph.kilometeres = kilometeres + tr.kilometeres;
			tph.hours = hours + tr.hours;
			cout<<"Total Traveling is: "<<tph.kilometeres<<" Kms in "<<tph.hours<<" hours."<<endl;
		}
};
int main(){
	Travel my, your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
}
