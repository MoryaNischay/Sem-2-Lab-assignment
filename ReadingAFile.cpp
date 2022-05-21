#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ifstream myfile;
	myfile.open("ok.txt");
	if(myfile){
		int a=0;
		string c;
		while(myfile){
			c=myfile.get();
			cout<<c;
			a++;
		}
		cout<<"No. of alphabets are "<<a<<endl;
}
	
	
}
