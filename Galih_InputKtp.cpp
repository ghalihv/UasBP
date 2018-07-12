#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char nama[30];
	char nik[20];
	char tempattanggallahir[30];
	char jeniskelamin[19];
	char alamat[40];
	char agama[15];
	char statusperkawinan[19];
	char pekerjaan  [15];
	char kewarganegaraan[15];
	cout<<"Input Data KTP\n";
	cout<<"Nama :";
	cin.getline(nama,30);
	cout<<"NIK :";
	cin.getline(nik,20);
	cout<<"Tempat/Tgl Lahir :";
	cin.getline(tempattanggallahir,30);
	cout<<"Jenis Kelamin :";
	cin.getline(jeniskelamin,19);
	cout<<"Alamat :";
	cin.getline(alamat,40);
	cout<<"Agama :";
	cin.getline(agama,15);
	cout<<"Status Perkawinan :";
	cin.getline(statusperkawinan,19);
	cout<<"Pekerjaan :";
	cin.getline(pekerjaan,15);
	cout<<"Kewarganegaraan :";
	cin.getline(kewarganegaraan,15);

getch();
}

