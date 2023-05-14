#include<iostream>
#include<iomanip>
using namespace std;
int main (){
int Nilai [20];
int i, j, N, l;
int temp,U, Imin;
    cout<<"Masukan Banyak Bilangan : ";
    cin>>N;
        for (i=0; i<N; i++){
            cout<<"Elemen ke-"<<i<<" : ";
            cin>>Nilai [ i ];
}

//Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for (i=0; i<N; i++)
        cout<<setw ( 3 )<<Nilai [ i ];

//Proses Pengurutan
    U = N - 1;
    for(i=0; i<=N-2; i++){
    Imin = 0;
    for (j=1; j<=U; j++){
    if(Nilai [ j ] <Nilai [Imin])
    Imin = j;
}
    temp = Nilai [ U ];
    Nilai [ U ]= Nilai [ Imin ];
    Nilai [ Imin ] = temp;
    cout<<endl;
    U--;
    for(l=0; l<N; l++)
    cout<<setw ( 3 )<<Nilai [ l ];
}
    cout<<"\nData Setelah di urut : ";
    for(i=0; i<N; i++)
    cout<<setw ( 3 )<<Nilai [ i ];
    cout<<endl;
}