#include<iostream>
using namespace std;
void cetak();
long gaji;

int main()
{	int umur=18, berat;
	string nama = "James";
	
	berat = umur * 3;
	cout<<"Nama : "<<nama<<"\nUmur : "<<umur<<" Tahun "<<endl;
	cout<<"Berat badan : "<<berat<<" Kg"<<endl;
	gaji = 350.45 + berat / 10;
	cetak();
}

void cetak()
{
	gaji = gaji * 25000;
	cout<<"Gaji = Rp. "<<gaji<<"\n";
	return;
}
