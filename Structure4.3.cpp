#include <iostream>
#include <cstdlib>
using namespace std;

struct tglLahir{
  short tgl, tahun;
  string bulan;
};

struct dataMhs{
  string nim, nama, t4lahir;
  struct tglLahir tgl;
  short umur;
  char jenkel;
};

struct dataMhs mhs;

main()
{
	string jk;
	cout<<"Input Biodata Mahasiswa :  \n";
	cout<<"Masukkan Nim : "; getline(cin,mhs.nim);
	cout<<"Masukkan Nama : "; getline(cin,mhs.nama);
	cout<<"Masukkan Tempat/ Tanggal Lahir :  \n";
	cout<<"Tempat : "; getline(cin,mhs.t4lahir);
	cout<<"Tanggal : "; cin>>mhs.tgl.tgl; cin.ignore();
	cout<<"Bulan : "; getline(cin,mhs.tgl.bulan);
	cout<<"Tahun : "; cin>>mhs.tgl.tahun; cin.ignore();
	mhs.umur = 2022 - mhs.tgl.tahun;
	cout<<"Masukkan Jenis Kelamin [L/P] : "; cin>>mhs.jenkel;
    if(mhs.jenkel =='L')
       jk="laki-laki";
    else
       jk="Perempuan";


    system("cls");
    cout<<"Mahasiswa dengan Nama  "<<mhs.nama<<" telah berumur = ";
    cout<<mhs.umur<<" tahun ini"<<endl<<"  dan berjenis kelamin "<<jk<<endl;
}
