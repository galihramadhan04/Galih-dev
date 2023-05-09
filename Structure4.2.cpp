#include <iostream>

using namespace std;

struct dataMhs{
  string nim, nama;
  float na;
};

dataMhs mhs1, mhs2, mhsMax;

main()
{
	cout<<"Masukan Data Mahasiswa Pertama :  \n";
	cout<<"Masukkan Nim : "; getline(cin,mhs1.nim);
	cout<<"Masukkan Nama : "; getline(cin,mhs1.nama);
	cout<<"Masukkan Nilai Akhir :  ";cin>>mhs1.na; cin.ignore();
	
	cout<<"\nMasukan Data Mahasiswa Kedua :  \n";
	cout<<"Masukkan Nim : "; getline(cin,mhs2.nim);
	cout<<"Masukkan Nama : "; getline(cin,mhs2.nama);
	cout<<"Masukkan Nilai Akhir :  ";cin>>mhs2.na; 

	if(mhs1.na > mhs2.na)
		mhsMax = mhs1;
	else{
		mhsMax.nim = mhs2.nim;
		mhsMax.nama = mhs2.nama;
		mhsMax.na = mhs2.na;
	}

    cout<<"\n\nMahasiswa dengan nilai tertinggi adalah : \n";
    cout<<"NIM : "<<mhsMax.nim<<" \nNAMA : "<<mhsMax.nama;
    cout<<" \nNilai Akhir : "<<mhsMax.na<<endl;
}
