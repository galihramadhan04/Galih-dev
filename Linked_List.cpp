#include <iostream>
using namespace std;

struct simpul{
	char data;
	struct simpul *next;
};
void cetak(simpul *p);

void inputSimpul(simpul *(&p)){
	simpul *pBaru;
	short lagi = 1;
	while(lagi<=5){
		pBaru = new simpul;
		cout<<"Masukkan karakter : "; cin>>pBaru->data;
		pBaru->next = NULL;
		if(p==NULL) p = pBaru;
		else{
			pBaru->next = p;
			p = pBaru;
		}
		cetak(p);
		lagi++;
		
		simpul *pBantu, *pHapus;
		char dHapus;
		cout<<"\nOperasi hapus belakang atau tengah,\n";
		while(p!=NULL){
			cout<<"Masukkan data yang akan dihapus [x:batal] : ";
			cin>>dHapus; if(dHapus=='x') break;
			if(p->data == dHapus){
				cout<<"\nOperasi harus depan, ";
				pBantu = p;
				p = pBantu->next;
				delete pBantu;
				cetak(p);
			}else{
				cout<<"\nOperasi hapus tengah\\belakang, ";
				pBantu = p;
				while(pBantu->next->data != dHapus)
					pBantu = pBantu->next;
				pHapus = pBantu->next;
				pBantu->next = pHapus->next;
				delete pHapus;
				cetak(p);
			}
		}
	}
}
