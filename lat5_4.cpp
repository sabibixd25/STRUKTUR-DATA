#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
using namespace std;

    const int N = 100;
    void baca (int nilai[], int &M);
    void Cetak (int nilai[N], int &M);
    void jumlah (int nilai[N], int &M, int &Jlh, float &Rata);

int main(){
    int M;
    int nilai[N];
    int Jlh=0;
    float Rata;
    
    cout<<"Banyak Elemen : ";
    cin>>M;
    baca(nilai, M);
    cout<<"\nElemen Elemen : ";
    Cetak(nilai, M);
    jumlah(nilai,M,Jlh,Rata);
    cout<<"\nJumlah bilangan "<<Jlh;
    cout<<"\nRata-rata Bilangan : "<<Rata;
    getch();
}
void baca (int nilai[], int &M){
        for (int i = 0; i < M; i++)
        {
            cout<<"Elemen ke-"<<(i+1)<<" : ";
            cin>>nilai[i];
        }
        
    }
    void Cetak (int nilai[], int &M){
         int i;
            for ( i = 0; i < M; i++)
            {
              cout<<setw(3)<<nilai[i];
            }
            
    }
    void jumlah (int nilai[], int &M, int &Jlh, float &Rata){
        for (int i = 0; i < M; i++)
            Jlh+=nilai[i];
            Rata = (float) Jlh/M;
    }