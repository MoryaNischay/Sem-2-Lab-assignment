#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main(){
	ifstream read;
	read.open("file.txt");
	string reading;
	while (read){
	
	reading=read.get();
	cout<<reading<<endl;
	}
}
