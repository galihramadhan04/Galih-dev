#include<iostream>

using namespace std;

main()
{
	string nama, nim, alamat;
	
	int umur;
	
	cout<<"Masukkan Nim Anda : "; cin>>nim;
	cin.ignore();
	cout<<"Masukkan Nama Anda :"; getline(cin,nama);
	cout<<"Masukkan Alamat Anda :"; getline(cin,alamat);
	cout<<"Masukkan Umur Anda :"; cin>>umur;
	
	cout<<"\n";
	cout<<"Nim anda adalah : "<<nim<<"\n";
	cout<<"Nama Anda : "<<nama<<"\n";
	cout<<"Alamat Anda di "<<alamat<<"\n"; 
	cout<<"Umur anda sekarang : "<<umur<<" tahun"<<"\n";
}
