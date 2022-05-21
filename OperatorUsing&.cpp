#include <iostream>
using namespace std;
class Distance{
	public:
		int x,y;
		Distance(){
			cout<<"In default constructor"<<endl;
			 
		}
		Distance(int a,int b){
			x=a;
			y=b;
		}
		Distance operator+(Distance &d){
			Distance d3;
			d3.x=x+d.x;
			d3.y=y+d.y;
			return d3;
		}
		void show(){
			cout<<x<<" + "<<y;
		}
};
int main(){
	Distance d1(2,2),d2(4,4),d3;
	d3= d1+d2;
	d3.show();
}
