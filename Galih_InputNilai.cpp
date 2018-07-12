#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,AVG[10][9]; 
	int uts[10][9],uas[10][9];
	string nama_belakang[10][9],nama_depan[10][9],nim[10][9],kelas[10][9];
	
	cout<<"Jumlah Data Mahasiswa : ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{	
		cout<<endl;
		cout<<"Data "<<i+1<<" "<<endl;
		cout<<"Nama depan	: ";
		cin>>nama_depan[i][i];
		cout<<"Nama belakang	: ";
		cin>>nama_belakang[i][i];
		cout<<"NIM		: ";
		cin>>nim[i][i];
		cout<<"Nilai UTS	: ";
		cin>>uts[i][i];
		cout<<"Nilai UAS	: ";
		cin>>uas[i][i];
		AVG[i][i]=(uts[i][i]+uas[i][i])/2;
	}
	
	
	cout<<"\n DAFTAR NILAI MAHASISWA "<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"NO	Nama			NIM      	  	Kelas		NILAI UTS	NILAI UAS	RATA-RATA	GRADE		KETERANGAN"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<"	"<<nama_depan[i][i]<<" "<<nama_belakang[i][i]<<"		"<<nim[i][i]<<"				"<<uts[i][i]<<"		"<<uas[i][i]<<"		"<<AVG[i][i]<<"       ";
		if(AVG[i][i]<100,AVG[i][i]>80){
			cout<<"A		LULUS"<<endl;
		}
		else if(AVG[i][i]<79,AVG[i][i]>60){
			cout<<"B		LULUS"<<endl;
		}
		else if(AVG[i][i]<59,AVG[i][i]>40){
			cout<<"C		LULUS"<<endl;
		}
		else if(AVG[i][i]<39,AVG[i][i]>20){
			cout<<"D		TIDAK LULUS"<<endl;
		}
		else if(AVG[i][i]<19,AVG[i][i]>0){
			cout<<"E		TIDAK LULUS"<<endl;
		}
	}
getch();
}


