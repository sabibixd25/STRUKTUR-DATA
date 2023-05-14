#include<iostream>
#include<iomanip>
using namespace std;

int main (){

int Nilai [ 20 ];
int i, j, N, l;
int temp, Imin;
    cout<<"Masukan Banyak bilangan : ";
    cin>>N;
     for (i=0; i<N; i++ ){
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai [ i ] ;
}

//Proses Cetak Sebelum Diurutkan
    cout<<"\nData sebelum diurut :";
        for(i=0; i<N; i++)
        cout<<setw (3)<<Nilai [ i ];

//Proses pengurutan
    for (i=0;i<=N-2; i++){
        Imin = i;
            for(j=i+1; j<N; j++)
    {
            if(Nilai [j] < Nilai [Imin])
                Imin = j;
}
    temp = Nilai [i];
    Nilai [i] = Nilai [Imin];
    Nilai [Imin] = temp;
    cout<<endl;
        for(l=0; l<N; l++)
            cout<<setw(3)<<Nilai [l];
}
    cout<<"\nData Setelah di urut ; ";
    for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai [i];
    cout<<endl;
}
