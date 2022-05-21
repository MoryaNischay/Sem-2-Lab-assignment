#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int s;
	ofstream file("Sample.txt");
	for (s=1;s<201;s++){
		file<<s<<endl;
	}
}
