#include<iostream>
#include<iomanip>
using namespace std;

int main( ){
int Nilai [ 20 ];
int i, j, N, l;
int temp, U, Imaks;
cout<<"Masukan Banyaknya Bilangan : ";
cin>>N;
for(i=0; i<N; i++)
{
cout<<"Elemen ke -"<<i<<" : ";
cin>>Nilai [ i ];
}
//Peroses Cetak Sebelum diurutkan
cout<<"\nData Sebelum diurut :";
for (i=0; i<N; i++)
cout<<setw (3)<< Nilai [ i ] ;
//Peroses pengurutan
U=N-1;
for(i=0; i<=N-2; i++)
{
Imaks = i;
for(j=i+1; j<=U; j++)
{
if(Nilai[ j ] > Nilai [Imaks])
Imaks = j;
}
temp = Nilai [ i ];
Nilai [ i ] = Nilai [ Imaks ];
Nilai [Imaks] = temp;
cout<<endl;
for(l=0; l<N; l++)
cout<<setw(3)<<Nilai [l];
}
cout<<"\ndata setelah diurut : ";
for(i=0; i<N; i++)
cout<<setw(3)<<Nilai [i];
cout<<endl;

}