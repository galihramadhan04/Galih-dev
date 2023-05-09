#include <iostream>
 using namespace std;

 main()
 {
     int *p1 = new int;
     int *p2 = new int;
     *p1 = 84;
     *p2 = 99;
     cout<<" Before : "<<endl;
     cout<<"   isi pointer p1  : "<<p1<<endl;
     cout<<"   isi pointer p2  : "<<p2<<endl;
     cout<<"   isi simpul *p1  : "<<*p1<<endl;
     cout<<"   isi simpul *p2  : "<<*p2<<endl;
     p1 = p2;  
     cout<<" After: p1 = p2; "<<endl;
     cout<<"   isi pointer p1  : "<<p1<<endl;
     cout<<"   isi pointer p2  : "<<p2<<endl;
     cout<<"   isi simpul *p1  : "<<*p1<<endl;
     cout<<"   isi simpul *p2  : "<<*p2<<endl;
     cout<<"   jika  p1 == p2  : "<<(p1==p2)<<endl;
     cout<<"   jika *p1 == *p2 : "<<(*p1==*p2)<<endl<<endl;
     cin.get();

     p1 = new int; *p1 = 84;
     p2 = new int; *p2 = 99;
     cout<<" Before : "<<endl;
     cout<<"   isi pointer p1  : "<<p1<<endl;
     cout<<"   isi pointer p2  : "<<p2<<endl;
     cout<<"   isi simpul *p1  : "<<*p1<<endl;
     cout<<"   isi simpul *p2  : "<<*p2<<endl;
     *p1 = *p2;  //dilakukan copcy simpul
     cout<<" After: *p1 = *p2; "<<endl;
     cout<<"   isi pointer p1  : "<<p1<<endl;
     cout<<"   isi pointer p2  : "<<p2<<endl;
     cout<<"   isi simpul *p1  : "<<*p1<<endl;
     cout<<"   isi simpul *p2  : "<<*p2<<endl;
     cout<<"   jika  p1 == p2  : "<<(p1==p2)<<endl;
     cout<<"   jika *p1 == *p2 : "<<(*p1==*p2)<<endl<<endl;
 }
