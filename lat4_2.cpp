#include <iostream>
#include <conio.h>
using namespace std;

    int main(){
        int x= 8,y;
        int *xPtr;
        xPtr = &x;
        y = *xPtr;
        cout<<endl;
        cout<<"Nilai    = "<<x<<endl;
        cout<<"Alamat x = "<<&x<<endl ;
        cout<<"Alamat x = "<<xPtr<<endl ; 
        cout<<"Nilai yang disimpan pada alamat " ; 
        cout<<xPtr<<" adalah "<<y;
getch ();

return 0;
    }