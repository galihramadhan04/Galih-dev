#include <iostream>
 using namespace std;

 main()
 {
     int *p1, v1;
     cout<<" deklarasi: int *p1, v1;"<<endl;
     cout<<"   alamat memori v1 : "<<&v1<<endl;
     cout<<"   alamat memori p1 : "<<&p1<<endl;
     cout<<"   alamat yg ditunjuk p1 : "<<p1<<endl;
     //cout<<"   nilai yg ditunjuk p1  : "<<*p1<<endl<<endl;

     v1 = 45;
     p1 = &v1;
     cout<<" setelah: v1 = 45; dan p1 = &v1; "<<endl;
     cout<<"   alamat yg ditunjuk p1 : "<<p1<<endl;
     cout<<"   nilai variabel v1     : "<<v1<<endl;
     cout<<"   nilai yg ditunjuk p1  : "<<*p1<<endl;
 }
