#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

    struct mahasiswa{
        char nim[9];
        char nama[25];
        char alamat[40];
        short umur;
    };

    void baca(mahasiswa &mhs);
    void cetak(mahasiswa &mhs);

    int main(){
        mahasiswa mhs;
        cout<<endl;
        cout<<"membaca nilai anggota struktur \n";
        baca(mhs);
        cout<<"\nmencetak nilai anggota struktur ";
        cetak(mhs);
        getch();
    }

void baca(mahasiswa &mhs){
    cout<<"nim : ";
    cin.getline(mhs.nim, 9);
    cout<<"nama : ";
    cin.getline(mhs.nama, 25);
    cout<<"alamat : ";
    cin.getline(mhs.alamat, 40);
    cout<<"umur : ";
    cin>>mhs.umur;
}

void cetak(mahasiswa &mhs){
    cout<<"\nnim : "<<mhs.nim;
    cout<<"\nnama : "<<mhs.nama;
    cout<<"\nalamat : "<<mhs.alamat;
    cout<<"\numur : "<<mhs.umur;
    cout<<endl;
}