#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

void shellsortsecaramenaik(){
    int Nilai [ 20 ];
int i, k, N, l;
int temp, jarak, s;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;

    for (i=0; i<N; i++){
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai [ i ];
}

//Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for (i=0; i<N; i++)
    cout<<setw (4)<<Nilai [ i ];
//Proses pengurutan
    jarak = N/2;
    cout<<"\nJarak= "<<jarak;
    while (jarak >= 1){
        do{
            s=0;
            for (i =0; i<=(N-jarak)-1; i++){
            k=i+ jarak;
            if(Nilai [i] > Nilai [k]){
            temp = Nilai [i];
            Nilai [i] = Nilai [k];
            Nilai [k] = temp;
            s=1;
            for(l=0; l<N; l++)
            cout<<setw (4)<<Nilai [l];
            cout<<"\n\t";

        }
    }
}
    while(s!=0);
    jarak /=2;
    cout<<"\nJarak= "<<jarak;
}
    cout<<"\nData Setelah diurut : ";
    for(i=0; i<N ;i++)
    cout<<setw (4)<<Nilai [i];
    cout<<endl;
}

void shellssortsecaramenurun(){
    int Nilai [ 20 ];
int i, k, N, l;
int temp, jarak, s;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;

    for (i=0; i<N; i++){
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai [ i ] ;
}

//Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for (i=0; i<N; i++)
    cout<<setw (4)<<Nilai [ i ];

//Proses pengurutan
        jarak = N/2;
        cout<<"\nJarak= "<<jarak;
        while (jarak >= 1){
            do{
            s=0;
            for (i =0; i<=(N-jarak)-1; i++){
            k=i+ jarak;
            if(Nilai [i] < Nilai [k]){
            temp = Nilai [i];
            Nilai [i] = Nilai [k];
            Nilai [k] = temp;
            s=1;
            for(l=0; l<N; l++)
            cout<<setw (4)<<Nilai [l];
            cout<<"\n\t";
        }
    }
}
    while(s!=0);
    jarak /=2;
    cout<<"\nJarak= "<<jarak;
}
    cout<<"\nData Setelah diurut : ";
    for(i=0; i<N ;i++)
    cout<<setw (4)<<Nilai [i];
    cout<<endl;
}

void insertionsortsecaramenaik(){
    int Nilai [ 20 ];
int i, j, k, N;
int temp;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;

    for (i=0; i<N; i++){
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai [ i ] ;
}

//Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for (i=0; i<N; i++)
    cout<<setw ( 3 )<<Nilai [ i ];

//Proses pengurutan
    for(i=1; i<N; i++){
        temp = Nilai [ i ] ;
        j=i-1 ;
        while ((temp <= Nilai [ j ]) && (j>=1)){
            Nilai [j+1] = Nilai [ j ];
            j--;
}
    if(temp >= Nilai [ j ])
    Nilai [j+1] = temp;
    else
{
    Nilai [ j + 1] = Nilai [ j ];
    Nilai [ j ] = temp;
}
    cout<<endl;
    for(k=0; k<N; k++)
    cout<<setw ( 3 )<<Nilai [ k ];
}

//Proses Cetak Setelah diurutkan
    cout<<"\nData Setelah diurut : ";
    for (i=0; i<N; i++)
    cout<<setw (3)<<Nilai [ i ] ;
    cout<<endl;
}

void insertionsortsecaramenurun(){
    int Nilai [ 20 ];
int i, j, k, N;
int temp;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;
    for (i=0; i<N; i++){
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai [ i ] ;
}

//Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
        for (i=0; i<N; i++)
            cout<<setw ( 3 )<<Nilai [ i ];

//Proses pengurutan
    for(i=1; i<N; i++){
        temp = Nilai [ i ] ;
        j=i-1 ;
            while ((temp > Nilai [ j ]) && (j>=1)){
                Nilai [j+1] = Nilai [ j ];
                j--;
}
    if(temp <= Nilai [ j ])
    Nilai [j+1] = temp;
    else{
    Nilai [ j + 1] = Nilai [ j ];
    Nilai [ j ] = temp;
}
    cout<<endl;
    for(k=0; k<N; k++)
    cout<<setw ( 3 )<<Nilai [ k ];
}

//Proses Cetak Setelah diurutkan
    cout<<"\nData Setelah diurut : ";
    for (i=0; i<N; i++)
    cout<<setw (3)<<Nilai [ i ] ;
    cout<<endl;
}

int main(){
menu:
int pilihan;
cout<<"--------Menu----------\n";
cout<<" 1.Metode Shell Sort (Pengurutan secara menaik)\n";
cout<<" 2.Metode Shell Sort (Pengurutan secara menurun)\n";
cout<<" 3.Metode Insertion Sort (Pengurutan secara menaik)\n";
cout<<" 4.Metode Insertion Sort (Pengurutan secara menurun)\n";
cout<<" 5.Exit\n";
cout<<"----------------------\n";
cout<<"Masukan Pilihan anda : ";
cin>>pilihan;

    switch (pilihan)
    {
    case 1 : 
        shellsortsecaramenaik();
        goto menu;
        break;
    case 2 :
        shellssortsecaramenurun();
        goto menu;
        break;
    case 3 :
        insertionsortsecaramenaik();
        goto menu;
        break;
    case 4 : 
        insertionsortsecaramenurun();
        goto menu;
        break;    
    default:
        cout<<"program selesai";
        cout<<endl;
        break;
    }
}