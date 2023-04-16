#include<stdio.h> 
#include<iostream> 
#include<conio.h>
using namespace std;
 
struct Tinggal {
char Jaln [40] ; 
char Kota [15] ; 
char Pos [5] ;
};
struct Tgl_Lahir { 
    int Tanggal [31]; 
    int Bulan [12];
    int Tahun ;
};
struct Mahasiswa { 
        char Nim [9];
        char Nama [25]; 
        char alamattinggal [20];
        Tinggal Alamat; 
        Tgl_Lahir Lahir;
};
 int main()
{
Mahasiswa Mhs ;
cout<<"NIM	: "; 
cin.getline (Mhs.Nim, 9 ) ;
cout<<"Nama		: "; 
cin.getline (Mhs.Nama, 25 ) ; 
cout<<"Alamat	: " ;
cin.getline (Mhs.alamattinggal, 20) ;
cout<<"\tJalan	: "; 
cin.getline ( Mhs.Alamat.Jaln, 40 ) ; 
cout<<"\tKota	: "; 
cin.getline ( Mhs.Alamat.Kota, 15 ) ; 
cout<<"\tKode pos	: "; 
cin.getline ( Mhs.Alamat.Pos, 5 ) ; 
cout<<"\tTanggal : "; 
cin>> Mhs.Lahir.Tanggal ; 
cout<<"\tBulan	: "; 
cin>>Mhs.Lahir.Bulan ; 
cout<<"\tTahun	: "; 
cin>>Mhs.Lahir.Tahun ; 
cout<<"\n\nMencetak Kembali Nilai Anggota\n\n"; 
cout<<"NIM		: "<<Mhs.Nim ; 
cout<<"\nNama	: "<<Mhs.Nama ; 
cout<<"\nAlamat : \n";
cout<<"\n\tJalan	: "<<Mhs.Alamat.Jaln; 
cout<<"\n\tKota	: "<<Mhs.Alamat.Kota; 
cout<<"\n\tKode Pos	: "<<Mhs.Alamat.Pos; 
cout<<"\nTanggal Lahir	: "<<Mhs.Lahir.Tanggal<<"-"; 
cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
getch ();
}
