#include <isotream>
#define maxAntrian 5
using namespace std;

struct queue{
	short count,front,rear;
	short isi[maxAntrian];a
};

void init(queue &q){
	q.front=-1;
	q.rear=-1;
	q.count=0;
}

short empty(queue q){
	if(q.rear == -1)
		return 1;
	else
		return 0;
}
short full(queue q, short maxQueue){
	if(q.rear == maxQueue-1)
		return 1;
	else
		return 0;
}

void enqueue(queue &q, short data){
	if(empty(q)){
		q.front = 0; q.rear = 0;
		q.isi[q.rear] = data;
		q.count++;
	}
	else{
		if(!full(q,maxAntrian)){
			q.rear++;
			q.isi[q.rear] = data;
			q.count++;
		}
		else
			cout<<"Antrian telah penuh ..!"<<endl;
	}	
}

void dequeue(queue &q, short &data){
	if(!empty(q)){
		data = q.isi[q.front];
		q.count--;
		for(short i=q.front;i<q.rear;i++)
			q.isi[i] = q.isi[i+1];
		q.rear--;
	}
}

void cetak(queue q){
	cout<<"Isi antrian saat ini : ";
	if(!empty(q)){
		for(short i=q.front;i<=q.rear;i++)
			cout<<q.isi[i]<<" ";
		cout<<endl;
	}else{
		cout<<"Kosong !!!"<<endl;
		cin.get();
	}
}

main(){
	struct queue q;
	short data;
	init(q);
	cout<<"Masukkan elemen antrian (0 = selesai) : ";
	cin<<data;
	do{
		enqueue(q,data);
		cetak(q);
		cout<<"Jumlah elemen dalam antrian : "<<q.count<<endl;
		cout<<"Masukkan elemen antrian (0 = selesai) : ";
		cin>>data;
	}while (data != 0)
	
	cin.get();
	
	cout<<"\n Proses penghapusan elemen antrian : ";
	while(!empty(q)){
		cin.get();
		denqueue(q,data);
		cout<<"Elemen yang dikeluarkan : "<<data<<endl;
		cetak(q);
		cout<<"Jumlah elemen dalam antrian : "<<q.count<<endl;
	}
	cout<<"\nProses selesai, Antrian telah kosong ..!"<<endl;
}
