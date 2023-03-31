/* 
	A Program that Displays the ASCII value of a 
	character using Scope Resolution Operator.
*/
#include<iostream>
using namespace std;
class Char_Oper{
	public:
		char character;
		Char_Oper(char t){
			character = t;
		}
		void get_asci(char t);
};
// Scope Resolution Operator ::
void Char_Oper::get_asci(char text){
	int asci_value = text;
	cout<<asci_value<<endl;
}
int main(){
	Char_Oper object('A');
	object.get_asci(object.character);
}

