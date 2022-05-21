#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	ifstream myfile;
	ofstream newfile("New.txt");
	myfile.open("ok.txt");
	while (!myfile.eof()){
		myfile.get(ch);
		newfile<<ch;
	}
	
	
}
