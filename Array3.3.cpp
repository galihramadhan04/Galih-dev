#include <iostream>
using namespace std;

void input(int x[])
{
	for(int a=0;a<5;a++){
		cout<<" Bilangan ke- "<<a+1<<" : ";
		cin>>x[a];
	}
}

int hitTotal(int x, int y)
{
	return(x + y);
}

main()
{
	int bil[5], total=0;
	cout<<" Masukan Data Bilangan Bulat : "<<endl;
	input(bil);
	
	for(int a=0;a<5;a++)
		total = hitTotal(bil[a], total);
	cout<<endl<<"Total Akumulasi Bilangan : "<<total;
	
	cout<<endl<<"Data Yang Telah Di input \n ";
	for(int a=0;a<5;a++){
		cout<<" Bilangan Ke- "<<a+1<<" : "<<bil[a]<<endl;
	}
}
