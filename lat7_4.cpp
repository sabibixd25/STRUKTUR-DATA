#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
main(){
    menu: system("cls"); 
int data[15]={10,12,88,2,95,36,47,77,51,13,75,85,95,23};
 int i,u,maks,j,t,min; 
 int pilihan; 
 cout<<"--------Menu----------\n";
 cout<<" 1.Metode Bubble Sort (Pengurutan secara menaik)\n";
 cout<<" 2.Metode Bubble Sort (Pengurutan secara menurun)\n";
 cout<<" 3.Metode Quick Sort (Pengurutan Secara menaik)\n"; 
 cout<<" 4.Exit\n"; cout<<"----------------------\n"; 
 cout<<"Masukan Pilihan anda : ";
 cin>>pilihan; 
 cout<<endl; 
 switch (pilihan){ 
    case 1 :
    cout<<"Data sebelum di urut\n\n"; 
    for (i=0;i<15;i++){ 
        cout<<setw(3)<<data[i]<<" ";
} 
 cout<<endl; 
 //Proses Pengurutan 
 u=15-1; 
 for(i=0;i<=15-2;i++){ 
    maks=0; 
    for(j=1;j<=u;j++) { 
        if(data[j]>data[maks]) maks=j; 
} 
t=data[u]; 
data[u]=data[maks]; 
data[maks]=t; 
u--; 
cout<<endl; 
for(int a=0;a<15;a++) 
cout<<setw(3)<<data[a];
} 
cout<<"\n\nData setelah di urut : \n\n"; 
for(i=0;i<15;i++) 
cout<<setw(3)<<data[i]; 
cout<<endl<<endl; 
lanjut: 
    cout<<"Tekan ENTER untuk kembali ke menu"; 
    getch(); 
    goto menu;


    case 2 :
        cout<<"Data sebelum di urut\n\n";
        for (i=0;i<15;i++){ 
        cout<<setw(3)<<data[i]<<" "; 
} 
cout<<endl; 
//Proses Pengurutan 
 u=15-1; 
 for(i=0;i<=15-2;i++){ 
    maks=i; 
    for(j=i+1;j<=u;j++){ 
        if(data[j]>data[maks]) 
        maks=j; 
    } 
    t=data[i]; 
    data[i]=data[maks]; 
    data[maks]=t; 
    cout<<endl; 
    for(int a=0;a<15;a++) 
    cout<<setw(3)<<data[a];
} 
cout<<"\n\nData setelah di urut : \n\n"; 
for(i=0;i<15;i++) 
cout<<setw(3)<<data[i]; 
cout<<endl<<endl; 
goto lanjut; 
getch(); 
goto menu;


    case 3:

    cout<<"Data sebelum di urut\n\n"; 
    for (i=0;i<15;i++){
 
cout<<setw(3)<<data[i]<<" "; 
} 
cout<<endl; 
//Proses Pengurutan 
for(i=0;i<=15-2;i++){ 
    min=i; 
    for(j=i+1;j<15;j++){ 
        if(data[j]<data[min]) 
        min=j; 
    } 
    t=data[i]; 
    data[i]=data[min]; 
    data[min]=t; 
    cout<<endl; 
    for(int a=0;a<15;a++) 
    cout<<setw(3)<<data[a];
} 
cout<<"\n\nData setelah di urut : \n\n"; 
for(i=0;i<15;i++) cout<<setw(3)<<data[i]; 
cout<<endl<<endl; goto lanjut; 
getch();
goto menu; 
case 4: 
exit(0);
}
}