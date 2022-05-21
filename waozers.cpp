#include <iostream>
using namespace std;
class Complex {
	int real;
	int imag;
	public:
	void input(int x, int y){
		real=x;
		imag=y;
	};
	void display() {
		cout<< real << "+" << "i" << imag<<endl;
	
	};
	void add(Complex c1,Complex c2);
	
};
void Complex :: add(Complex c1, Complex c2){
	real=c1.real+c2.real;
	imag=c1.imag+c2.imag;
};
int main(){
	Complex c1,c2,c3;
	c1.input(2,3);
	c2.input(1,2);
	c3.add(c1,c2);
	c1.display();
	c2.display();
	c3.display();
}

	
