#include <iostream>
using namespace std;
class lol{
	int pvt;
	public:
		lol(){
			cout<<"In default constructor of lol"<<endl;
		}
		lol (int a){
			pvt=a;
			cout<<"In parameterized constructor and pvt = "<<pvt<<endl;
		};
	void operator++(int a){
		pvt++;
	};
	void show(){
		cout<<pvt;
	}
	lol operator++(){
		lol l7;
		l7.pvt=pvt+1;
		return l7;
	}
};
 
int main(){
	lol l1(9);
	l1++;
	l1.show();
	lol l2;
	l2=++l1;
	l2.show();
}


