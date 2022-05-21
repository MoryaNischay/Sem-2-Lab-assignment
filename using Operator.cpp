#include<iostream>
using namespace std;
class Time{
	int hour; 
	int mins;
	public:
		Time(){
			hour=0;
			mins=0;
		}
		void operator= (int t){
			cout<<"Basic to Class type converter via operator overloading "<<endl;
			hour=t/60;
			mins=t%60;
		}
		void display(){
			cout<<"Time = "<< hour <<" hrs and "<<mins<<" mins\n";
		}
};
int main(){
	Time t1;
	int duration=95;
	t1=duration;
	t1.display();
	return 0;
}
