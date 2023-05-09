#include <iostream>
using namespace std;

void bubblesort(short data[], short jum){
	short temp;
	for(short i=0,i<jum;i++){
		for(short j=i+1;j<=jum;j++){
			if(data[i]>data[j]){
				temp = data;
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}

void cetak (short data[],short jum){
	for(short a=0;a<jum;a++){
		cout<<data[a]<<" ";
	}cout<<endl;
}

main(){
	short jum;
	cout<<"Masukkan jumlah data : "; cin>>jum;
	short *data = new short [jum];
	cout<<"Masukkan bilangan : \n";
	for(short a=0;a<jum;a++){
		cout<<" ke-"<<(a=1)<<" : ";
		cin>>data[a];
	}
	cout<<"\nKeadaan Acak : "; cetak(data,jum);
	bubblesort(data,jum-1);
	cout<<"\nKeadaan urut : "; cetak(data,jum);
}
