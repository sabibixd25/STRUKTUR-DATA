#include <iostream>
#include <conio.h>
using namespace std;

    int main(){
        int nilai [20];
        int i, N, angka, bilangan;
        cout<<"masukkan banyaknya bilangan : ";
        cin>>N;

    //membaca elemen 
    for(i=0; i<N; i++){
        cout<<"masukkan elemen ke-"<<i<<" = ";
        cin>>nilai[i];
    }

    //mencetak elemen array
    cout<<"\n\nDeretan bilangan = ";
    for ( i = 0; i < N; i++)
    cout<<nilai[i]<<" ";
    cout<<"\n\nmasukkan bilangan yang akan dicari = ";
    cin>>bilangan;

    //melakukan pencarian 
    i=0;
    do{
        if(nilai[i] == bilangan)
        angka = nilai[i];
        i++;
    }
     while(i<N);
     if(angka==bilangan)
        cout<<"bilangan "<<bilangan <<" ditemukan ";
        else
        cout<<"bilangan "<<bilangan<<" tidak ditemukan ";
        cout<<endl;
        getch();   
    
    


    }