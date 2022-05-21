#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class bank{
    char name[20];
    int acno;
    char type[20];
    int bal;
    int dep;
    int with;
    public:
    void input(){
        cout<<"Enter Your Name : ";
        gets(name);
        cout<<"Enter Your Account Number: ";
        cin>>acno;
        cout<<"Enter Your Account type: ";
        cin.ignore();
        gets(type);
        cout<<"Enter Balance: ";
        cin>>bal;

    }
    void deposit(){
        cout<<"Enter the amount to deposit: "<<endl;
        cin>>dep;
        bal=bal+dep;
    }
    void withdraw(){
        cout<<"Your current account balance is: " <<bal<<endl;
        cout<<"Enter the amount to withdraw: ";
        cin>>with;
        bal=bal-with;   
    }
    void display(){
        cout<<"Your Details are:"<<endl;
        cout<<name<<endl;
        cout<<acno<<endl;
        cout<<type<<endl;
        cout<<bal<<endl;
    }
};


int main(){
    bank a;
    a.input();
    a.deposit();
    a.withdraw();
    a.display();
    return 0; 
}