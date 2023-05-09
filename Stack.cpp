#include <iostream>
#include <string>
using namespace std;

struct stack{
	short top;
	char isi[20];
};

void init(short &top){
	top = -1;
}

short cekKosong(stack s){
	if(s.top == -1)
		return 1;
	else
		return 0;
}

short cekPenuh(stack s, short x){
	if(s.top == x)
		return 1;
	else
		return 0;
}

void push(stack &s, char x){
	s.top++;
	s.isi[s.top] = x;
}

void pop(stack &s, char &x){
	x = s.isi[s.top];
	s.top--;
}

int main(){
	string kalimat;
	stack s;
	char huruf;
	cout<<"Masukkan kalimat : "; getline(cin,kalimat);
	init(s.top);
	do{
		push(s,kalimat[s.top+1]);
	}while(s.top<kalimat.length()-1);
	cout<<"Kalimat dibalik menjadi : ";
	do{
		pop(s,huruf);
		cout<<huruf;
	}while(!cekKosong(s));
}
