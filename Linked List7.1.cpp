#include<iostream>
using namespace std;

struct simpul {
	char data;  //medan informasi
	struct simpul *next; //medan penyambung
};
void cetak(simpul   *p)  {
	simpul *pBantu;
	pBantu = p;
	cout<<"isi linked list : ";
	if(pBantu==NULL) cout<<"kosong"<<endl;
	while(pBantu!=NULL) {
		cout<<pBantu->data<<"  ";
		pBantu = pBantu->next;
	}  cout<<endl;
}
int main() {
	simpul *p;
	cout<<"inisialisasi linked list, ";
	p = NULL;
	cetak(p);
	cout<<"simpul pertama (A), ";
	simpul *pBaru = new simpul;
	pBaru->data = 'A';
	pBaru->next = NULL;
	p = pBaru;
	cetak(p);
	cout<<"Sisip depan (B), ";
	pBaru= new simpul;
	pBaru->data= 'B';
	pBaru->next = NULL;
	pBaru->next = p;
	p = pBaru;
	cetak(p);
	cout<<"sisip belakang (C), ";
	pBaru = new simpul;
	pBaru->data = 'C';
	pBaru->next = NULL;
	simpul *pBantu;
	pBantu = p;
	while(pBantu->next != NULL)
	        pBantu = pBantu->next;
    pBantu->next =pBaru;
    cetak(p);
    cout<<"sisip tengah (D), ";
    pBaru = new simpul;
    pBaru->data = 'D ';
    pBaru->next = NULL;
    pBantu = p;
    while(pBantu->next->data != 'C')
	    pBantu = pBantu->next;
	    pBaru->next = pBantu->next;
	    pBantu->next = pBaru;
	    cetak(p);
}
