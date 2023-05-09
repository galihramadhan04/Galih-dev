#include <iostream>
#include <iomanip>
using namespace std;

void cetak(short x [3] [2])
{
	for(short a=0;a<3;a++){
		for(short b=0;b<2;b++){
			cout<<setw(4)<<x[a][b];
		} cout<<endl;
	}
}

void input(short &x, short a, short b)
{
	cout<<"  ["<<a+1<<","<<b+1<<"]  : ";cin>>x;
}

main()
{
	short matriksA [3] [2];
	matriksA [0] [0] = 4;
	matriksA [0] [1] = 9;
	matriksA [1] [0] = 2;
	matriksA [1] [1] = 5;
	matriksA [2] [0] = 7;
	matriksA [2] [1] = 3;
	
	cout<<"\nIsi matriks A = \n";
	cetak(matriksA);
	
	short matriksB [3] [2] = {{4,9}, {2,5}, {7,3}};
	cout<<"\nIsi matriks B = \n";
	cetak(matriksB);
	
	cout<<"Masukkan Elemen Matriks C : \n";
	short matriksC [3] [2];
	for(short a=0;a<3;a++){
		for(short b=0;b<2;b++){
			
			input(matriksC[a][b], a, b);
			
		}
	}
	cout<<"\nIsi matriks C = \n";
	cetak(matriksC);
}
