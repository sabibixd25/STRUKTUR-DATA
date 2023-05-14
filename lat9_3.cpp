#include<iostream>
#include<iomanip>
using namespace std;

int main (){
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