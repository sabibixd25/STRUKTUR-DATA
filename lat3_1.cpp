#include<stdio.h> 
#include<iostream> 

using namespace std;
struct Mahasiswa
{
char Nim [14] ; 
char Nama [25] ; 
char Alamat[40] ; 
short Umur ;
};
int main ()
{
Mahasiswa Mhs; 
cout<<"Nim	: " ; 
cin.getline (Mhs.Nim,9);
cout<<"Nama	: "; 
cin.getline (Mhs.Nama,25);
cout<<"Alamat	: "; 
cin.getline (Mhs.Alamat,40);
cout<<"Umur  :";
cin>>Mhs.Umur ; 
cout<<"\n\n\nNim      : "<<Mhs.Nim;
cout<<"\nNama         : "<<Mhs.Nama;
cout<<"\nAlamat       : "<<Mhs.Alamat;
cout<<"\nUmur         : "<<Mhs.Umur;
cout<<"\n";
return 0;
}
