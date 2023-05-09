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
void cetak(dataMhs x, string y);
void input(dataMhs &x)
{
	cout<<"Masukkan Nim : "; getline(cin,x.nim);
	cout<<"Masukkan Nama : "; getline(cin,x.nama);
	cout<<"Masukkan Tempat/ Tanggal Lahir :  \n";
	cout<<"Tempat : "; getline(cin,x.t4lahir);
	cout<<"Tanggal : "; cin>>x.tgl.tgl; cin.ignore();
	cout<<"Bulan : "; getline(cin,x.tgl.bulan);
	cout<<"Tahun : "; cin>>x.tgl.tahun; cin.ignore();
	cout<<"Masukkan Jenis Kelamin [L/P] : "; cin>>x.jenkel;
}

string cariUmurJK(short thnlahir, char cjk, short  &umur)
{
    umur = 2022 - thnlahir;
    if(cjk =='L')
       return("laki-laki");
    else
       return("Perempuan");
}

main()
{
    string jk;
    cout<<"Input Biodata Mahasiswa   \n ";
    input(mhs);
    
    jk=cariUmurJK(mhs.tgl.tahun, mhs.jenkel, mhs.umur);
    
    cetak(mhs, jk);
}
void cetak (dataMhs x, string y)
{
    system("cls");
    cout<<"Mahasiswa dengan Nama  "<<x.nama<<" telah berumur = ";
    cout<<x.umur<<" tahun ini"<<endl<<"  dan berjenis kelamin "<<y<<endl;
}
