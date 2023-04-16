#include <iostream>
#include <conio.h>
using namespace std;

    int main () {

        int nilaiA [10] = {50, 42, 90, 76, 32, 10, 5, 28, 77, 3};
        int *p_nilaiA;
        p_nilaiA = nilaiA;
        int i=0;

    cout<<endl;
    cout<<"\nAlamat array : "<<p_nilaiA;
    cout<<"\nindeks pertama pada array  : "<<nilaiA[0];
    cout<<"\nindeks terakhir pada array : "<<nilaiA[9];
    cout<<endl;

    cout<<"\nmenampilkan nilai dalam array"<<endl;
    while (i < 10)
    {
        cout<<"nilai elemen "<< i <<" dalam array "<<*p_nilaiA<<endl;
        p_nilaiA++;
        i++;
    }
    
return 0;

}