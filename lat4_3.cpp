#include <stdio.h>
#include <conio.h> 
#include <iostream> 
using namespace std;

    int main ()
{
int Nilai [ ] = {45, 23, 50, 8, 12, 10, 15} ;
int *Ptr_Nilai ; 
int i;
Ptr_Nilai = Nilai ;
cout<<"\nNilai Ptr_Nilai     : "<<Ptr_Nilai; 
cout<<"\nAlamat array Nilai  : "<<Ptr_Nilai;
cout<<"\nNilai yang ada pada alamat "<<Ptr_Nilai<<" adalah "<<*Ptr_Nilai;
cout<<"\nelemen array pada indeks pertama : "<<Nilai[0];
cout<<"\n\nelemen array (dgn array) : ";
    for ( i = 0; i < 7; i++)
    {
        cout<<Nilai[i]<<" ";
    }
cout<<"\n\nelemen array (dgn pointer) : ";
    for ( i = 0; i < 7; i++)
    {
        cout<<Ptr_Nilai[i]<<" ";
    }
    
   getch(); 

}