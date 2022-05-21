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
	Complex *ptr=new Complex [7];
    for ( int i=0;i<5;i++){
        ptr->input(i+1,i+3);
        ptr->display();
        ptr++;
    }
}
