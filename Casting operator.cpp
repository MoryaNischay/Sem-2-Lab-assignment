#include<iostream>
using namespace std;
class Time{
	int hour; 
	int mins;
	public:
		Time(int a,int b){
			hour=a;
			mins=b;
		}
		operator int()f{
			cout<<"Basic to Class type converter via operator overloading "<<endl;
			return (hour*60+mins);
		}
		~Time(){
			cout<<"Destructor is called"<<endl;
		}
};
int main(){
	Time t1(2,30);
	int duration=t1;
	cout<<duration<<endl;
	return 0;
}
