#include<iostream>
using namespace std;
class CGS{
	int mts,cms;
	public:
		CGS(int a,int b){
			mts=a;
			cms=b;
		}
		CGS(){
			cout<<"Metric System Constructor ";
		}
		int getmts(){
			return mts;
		}
		int getcms(){
			return cms;
		}
		void show(){
			cout<<"Metres "<<mts<<endl;
			cout<<"Centimetres "<<cms<<endl;
		}
};
class FPS{
	int feet;
	double inches;
	public:
		FPS(){
			feet=0;
			inches=0;
		}
		FPS(CGS o){
			int x;
			int y;
			x=(o.getmts()*100)+o.getcms();
			y=x/2.54;
			feet=y/12;
			inches=(int)y%12;
		}
		void show(){
			cout<<"Feet= "<<feet<<endl;
			cout<<"Inches= "<<inches<<endl;
		}
};

int main(){
	CGS c1(2,20);
	FPS f1;
	f1=c1;
	c1.show();
	f1.show();
}

