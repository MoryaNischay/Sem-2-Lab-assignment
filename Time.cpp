#include <iostream>
using namespace std;
class Time {
	
	int hrs;
	int min;
	public:
	void input(int x, int y){
		hrs=x;
		min=y;
	if (min>59){
		hrs=hrs+1;
		min=min-60;
		};
	};

	
	void display (){
		cout<< hrs <<"Hrs "<< min << "mins"<<endl;
		
	};
	
	void add1 (Time  c1, Time c2){
		hrs = c1.hrs + c2.hrs;
		min = c1.min + c2.min;
		if (min>59){
			hrs=hrs+1;
			min=min-60;
		};
		
	};
	
	Time add2(Time c1,Time c2){
	
	                      
		Time temp;
		temp.hrs=c1.hrs+c2.hrs;
		temp.min=c1.min+c2.min;
		if (temp.min>59){
			temp.hrs=temp.hrs+1;
			temp.min=temp.min-60;
		};
		return temp;
	};
	void add3(Time c1){
		hrs=hrs + c1.hrs;
		min=min + c1.min;
		if (min>59){
			hrs=hrs+1;
			min=min-60;
		};
	};
	Time add4(Time c1){
		Time sum;
		sum.hrs= hrs+c1.hrs;
		sum.min= min+c1.min;
		if (sum.min>59){
			sum.hrs=sum.hrs+1;
			sum.min=sum.min-60;
		};
	};
};
int main (){
	Time c1,c2,c3,c4,c5,c6;
	c1.input(2,100);
	c2.input(4,100);
	c1.display();
	c2.display();
	c3.add1(c1,c2);
	c3.display();
	c5=c4.add2(c1,c2);
	c5.display();
	c3.add3(c2);
	c3.display();
	c6=c3.add4(c2);
	c6.display();
	}
