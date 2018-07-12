#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int luas;
	float panjang, lebar;
	cout<<"input panjang"<<endl;
	cin>>panjang;
	cout<<"input lebar"<<endl;
	cin>>lebar;
	
	luas = panjang*lebar;
	
	cout<<"\nluas persegi panjang";
	cout<<"\nPanjang = "<<panjang;
	cout<<"\nLebar   = "<<lebar;
	cout<<"\nLuas      = "<<luas;
	
	getch();
}
