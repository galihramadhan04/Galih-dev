#include<iostream>
using namespace std;

 main()
 {
 	long jumlah, bayar;
 	float discon;
 	const int batas =50000;
 	
 	cout<<"Masukan Jumlah Belanjaan Rp. ";
 	cin>>jumlah;
 	if(jumlah > batas)
 		discon = 0.1 * jumlah;
 	else
 		discon = 0;
 	
 	bayar = jumlah - discon;
 	cout<<"Jumlah Pembelian Rp. "<<jumlah<<endl;
 	cout<<"Jumlah discon Rp. "<<discon<<endl;
 	cout<<"--------------------------------------\n";
 	cout<<"Jumlah Pembayaran Rp. "<<bayar<<endl;
 }
