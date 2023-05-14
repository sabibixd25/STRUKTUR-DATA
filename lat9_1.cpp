#include<iostream>
#include<iomanip>
using namespace std;

int main (){
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
}