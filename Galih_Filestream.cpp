#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct mahasiswa
{
	char nama[60];
};

mahasiswa ueu;
char kodefile[25], kodefile2[25], kodefile3[25];



int menu()
{
	cout<<"Silahkan pilih kode yang Anda inginkan : "<<endl;
	cout<<"[1] Input Data"<<endl;
	cout<<"[2] Tambah Data"<<endl;
	cout<<"[3] Lihat Data"<<endl;
	cout<<"[4] Keluar"<<endl;
	cout<<"Masukkan kode yang Anda pilih [1/2/3/4] : ";
}



int garis()
{
	for(int i=0; i<70; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}



int input_data()
{
	cout<<"Masukkan kode file (.txt) : ";
	cin.getline(kodefile,15);
	ofstream simpan (kodefile);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,60);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}



int tambah_data()
{
	cout<<"Masukkan kode file(.txt) : ";
	cin.getline(kodefile,15);
	ofstream simpan (kodefile, ios::app);
	system("cls");
	cout<<"\nNama\t    : ";
	cin.getline(ueu.nama,60);
	simpan<<ueu.nama<<endl;
	cout<<"\n\n\n"; system("pause");
}




int baca_data()
{
	cout<<"Masukkan kode file (.txt): ";
	cin>>kodefile;
	ifstream buka (kodefile);
	if(buka.good())
	{
		while(!buka.eof())
		{
			system("cls");
			while(buka)
			{ 
				buka.getline(ueu.nama,60);	
				cout<<ueu.nama<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ada"<<endl;
	getch();
}




int main()
{
	char kode;

	dataa:
	system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");

   	switch (kode)
   	{
   		case '1': input_data(); goto dataa;
   		case '2': tambah_data(); goto dataa;
		case '3': baca_data(); goto dataa;
		case '4': cout<<"\n\n\tSelesai"<<endl; break;
   	 	default : cout<<"\n\n\tKode yang anda masukan salah!\n\n"<<endl; 
				 system("PAUSE"); goto dataa;
   	}
   	return 0;
}


