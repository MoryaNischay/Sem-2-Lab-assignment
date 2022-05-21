#include<iostream>
#include<cmath>
using namespace std;
class Cartesian{
	public:
		float x,y;
		Castesian(){
			x=0;
			y=0;
		}
	void show(){
		cout<<"X= "<<x<<" Y= "<<y<<endl;
	}
};
class Polar{
	int radius,angle;
	public:
		Polar(int a, int b){
			radius=a;
			angle=b*3.14159/180;
		}
		Polar(){
			cout<<"Default constructor of Polar"<<endl;
		}
		operator Cartesian(){
			Cartesian c;
			c.x=radius*sin(angle);
			c.y=radius*cos(angle);
			
		}
	void show(){
		cout<<"Radius= "<<radius<<" Angle= "<<angle<<endl;
	}
};
int main(){
	Polar p1(10,30);
	Cartesian c1;
	c1=p1;
	p1.show();
	c1.show();
}
