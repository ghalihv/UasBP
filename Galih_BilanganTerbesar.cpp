#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a,b,max;
	cout<<"program nilai terbesar\n";
	cout<<"input bilangan 1: ";
	cin>>a;
	cout<<"input bilangan 2: ";
	cin>>b;
	
	if(a>b){
		max = a;
	}else{
		max = b;
	}
	cout<<"\nBilangan terbesar = "<<max;
	getch();
}





