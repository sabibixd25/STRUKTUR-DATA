#include <iostream>
#include <conio.h>
using namespace std;

    int maks(int a, int b, int c){
        int Besar = a;
        if (b > Besar)
            Besar = b;
        if (c > Besar)
         Besar = c;
         return(Besar);
    }
  int  main(){
        int a=8, b=12, c=5;
        cout<<"nilai a = "<<a;
        cout<<"\nnilai b = "<<b;
        cout<<"\nnilai c = "<<c;
    cout<<"\nnilai terbesar : "<<maks(a,b,c);
    cout<<endl;
    getch();
    }
