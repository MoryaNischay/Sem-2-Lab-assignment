#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main(){
	string lolz;
	cin>>lolz;
	int a=lolz.length();
	ofstream filez("file.txt");
	filez<<lolz;
	cout<<a<<endl;
	/*ifstream read;
	read.open("file.txt");
	string reading;
	reading=read.get();
	cout<<reading<<endl;
	
}
