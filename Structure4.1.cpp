#include <iostream>

using namespace std;

struct dataMhs{
  string nim, nama;
  short nt, nm, nf;
  float na;
};

dataMhs mhs;

main()
{
	cout<<"Menghitung nilai Akhir :  \n";
	cout<<"Masukkan Nim : "; getline(cin,mhs.nim);
	cout<<"Masukkan Nama : "; getline(cin,mhs.nama);
	cout<<"Masukkan Nilai Tugas :  ";cin>>mhs.nt; 
	cout<<"Masukkan Nilai Mid :  "	;cin>>mhs.nm; 
	cout<<"Masukkan Nilai Final :  ";cin>>mhs.nf; 
		
	mhs.na = (0.25*mhs.nt) + (0.35*mhs.nm) + (0.40*mhs.nf);
    cout<<"Nilai Akhir dari "<<mhs.nama<<" Adalah : "<<mhs.na<<endl;
}
