#include <iostream.h>
#include <conio.h>
void main () {
char kode ;
char nama [30], *bunga ;
double harga, bayar;
int jumlah;
harga = 0 ;
clrscr();
cout<<"      AHLISIHIR FLORIST       \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Nama Pembeli   : "; cin>>nama;
cout<<"\n";
cout<<"Input kode bunga : "; cin>>kode;
cout<<"Input jumlah beli: "; cin>>jumlah;
clrscr ();
if (kode=='a'){
  harga = 100000;
  bunga = "mawar";
  }
else if (kode=='b'){
  bunga = "mawar";
  harga = 200000;
  }
else if (kode=='c'){
  bunga = "anggrek";
  harga = 300000;
  }
else if (kode=='d'){
  bunga = "nusa indah";
  harga = 400000;
  }
else {
  cout<<"Tidak ada kode yang sesuai";
  }
cout<<"       STRUK PEMBAYARAN      \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Nama Pembeli    : "<<nama<<"\n";
cout<<"jenis bunga     : "<<bunga<<"\n";
cout<<"Harga persatuan : "<<harga<<"\n";
cout<<"Jumlah Beli     : "<<jumlah<<"\n";
cout<<"------------------------------\n";
cout<<"\tTotal Harga   : Rp. "<<harga * jumlah<<"\n";
cout<<"\tUang beyar    : Rp. "; cin>>bayar;
cout<<"\tUang Kembali  : Rp. "<<bayar - (harga * jumlah)<<"\n\n";
cout<<"~~~~~~~~~~~~~~~~TERIMA KASIH~~~~~~~~~~~~~~~~~~~~~~~~~";
getch();
}
