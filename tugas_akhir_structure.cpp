#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;

struct Tinggal
{
    char Jalan [15];
    char Kode_pos [8];
    char Kota [20];
};

struct Tanggal
{
    int tanggal;
    int bulan;
    int tahun;
};

struct Tanggal_Kerja
{
    int Tanggal_kerja;
    int Bulan_kerja;
    int Tahun_kerja;
};


struct Biodata
{
    char Nip[18];
    char nama[15];
    char Jabatan[10];
    char agama[7];
    char Unit_kerja[15];
    Tinggal alamat;
    Tanggal lahir;
    Tanggal_Kerja mulai_kerja;


};

int main(){

    Biodata pgw [5];
        int i;
            for ( i = 0; i < 1; i++)
            {
                cout<<"\t=== ISI BIODATA ==="<<endl;
                cout<<"\tNIP        : ";
                cin>>pgw[i].Nip;
                cout<<"\tNAMA       : ";
                cin>>pgw[i].nama;
                cout<<"\tJABATAN    : ";
                cin>>pgw[i].Jabatan;
                cout<<"\tAGAMA      : ";
                cin>>pgw[i].agama;
                cout<<"\tUNIT KERJA : ";
                cin>>pgw[i].Unit_kerja;
                cout<<"\t===TANGGAL LAHIR==="<<endl;
                cout<<"\tTANGGAL : ";
                cin>>pgw[i].lahir.tanggal;
                cout<<"\tBULAN   : ";
                cin>>pgw[i].lahir.bulan;
                cout<<"\tTAHUN   : ";
                cin>>pgw[i].lahir.tahun; 
                cout<<"\t===ALAMAT TINGGAL==="<<endl;
                cout<<"\tJALAN    : ";
                cin>>pgw[i].alamat.Jalan;
                cout<<"\tKODE POS : ";
                cin>>pgw[i].alamat.Kode_pos;
                cout<<"\tKOTA     : ";
                cin>>pgw[i].alamat.Kota;
                cout<<"\t===TANGGAL KERJA==="<<endl;
                cout<<"\tTANGGAL KERJA : ";
                cin>>pgw[i].mulai_kerja.Tanggal_kerja;
                cout<<"\tBULAN KERJA   : ";
                cin>>pgw[i].mulai_kerja.Bulan_kerja;
                cout<<"\tTAHUN KERJA   : ";
                cin>>pgw[i].mulai_kerja.Tahun_kerja;
                cout<<endl;
                cout<<endl;
            }
        
        for ( i = 0; i < 1; i++)
        {
        cout<<"\n _______________________________________"<<endl;
        cout<<"\n|\tMENCETAK BIODATA PEGAWAI        |";
        cout<<"\n _______________________________________"<<endl;
            cout<<"\n\t NIP        : "<<pgw[i].Nip;
            cout<<"\n\t NAMA       : "<<strupr(pgw[i].nama);
            cout<<"\n\t JABATAN    : "<<strupr(pgw[i].Jabatan);
            cout<<"\n\t AGAMA      : "<<strupr(pgw[i].agama);
            cout<<"\n\t UNIT KERJA : "<<strupr(pgw[i].Unit_kerja);
            cout<<"\n\t TANGGAL LAHIR";
            cout<<"\n\t TANGGAL    : "<<pgw[i].lahir.tanggal<<" - ";
            cout<<pgw[i].lahir.bulan<<" - "<<pgw[i].lahir.tahun;
            cout<<"\n\t ALAMAT TINGGAL";
            cout<<"\n\t JALAN      : "<<strupr(pgw[i].alamat.Jalan);
            cout<<"\n\t KODE POS   : "<<pgw[i].alamat.Kode_pos;
            cout<<"\n\t KOTA       : "<<strupr(pgw[i].alamat.Kota);
            cout<<"\n\t TANGGAL KERJA";
            cout<<"\n\t TANGGAL    : "<<pgw[i].mulai_kerja.Tanggal_kerja<<" - ";
            cout<<pgw[i].mulai_kerja.Bulan_kerja<<" - "<<pgw[i].mulai_kerja.Tahun_kerja;
            cout<<endl;    
        cout<<"\n _______________________________________"<<endl;
        cout<<"\n|\t\tSELESAI                 |";
        cout<<"\n _______________________________________"<<endl;

        } 
getch(); 
return EXIT_SUCCESS; 
}



