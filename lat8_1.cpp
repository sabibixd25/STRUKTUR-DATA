#include<iostream>
#include<iomanip>
using namespace std;

int main (){
int Nilai [ 20 ];
int i, j , N, l ;
int temp, U, Imaks;
cout<<"Masukan Banyaknya Bilangan :";
cin>>N;

for(i=0; i<N; i++){
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai [ i ];
}

//Proses Cetak sebelum diurutkan
cout<<"\nData sebelum diurut :";
for(i=0; i<N; i++)
cout<<setw ( 3 )<<Nilai [ i ];

//Peroses Pengurutan
U=N-1 ;
for (i=0 ; i<=N-2; i++){
Imaks =0;
for(j=1; j<=U; j++){
if( Nilai [ j ] > Nilai [ Imaks] )
Imaks = j;
}
temp =Nilai [ U ];
Nilai [ U ] = Nilai [ Imaks];
Nilai [ Imaks ]= temp;
U--;
cout<<endl;
for(l=0; l<N; l++)
cout<<setw ( 3 )<<Nilai [ 1 ];
}
cout<<"\nData Setelah di urut : ";
for(i=0; i<N; i++)
cout<<setw (3 )<<Nilai [ i ] ;
cout<<endl;
}