#include<iostream>
using namespace std;
// Static functions are created with static keyword followed by the return type of the function
// Static functions can be called without creating an object of the class.
class Browsers{
	private:
		string browser_name,company_name;
		int ranking;
		static int browsers;
	public:
		Browsers(string browserName,string companyName,int Ranking){
			browsers++;
			browser_name = browserName;
			company_name = companyName;
			ranking = Ranking;
		}
		void details(){
			cout<<"Name: "<<browser_name<<endl;
			cout<<"Company: "<<company_name<<endl;
			cout<<"Ranking: "<<ranking<<endl<<endl;
		}
		static void count_objects(){
			cout<<"There are "<<browsers<<" Browsers."<<endl;
		}
};
int Browsers::browsers = 0;
int main(){
	Browsers browser("Google Chrome","Google",1);
	Browsers browser1("Bing","Microsoft",2);
	Browsers browser2("Firefox","FireFox",3);
	Browsers::count_objects();
	browser.details();
	browser1.details();
	browser2.details();
}
