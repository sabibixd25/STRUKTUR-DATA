#include <iostream>
#include <conio.h>
using namespace std;

    void Tukar (int& a,int& b){
        int z;
        z = a;
        a = b;
        b = z;
 }
   
int main(){
    int a=8, b = 5;
    cout<<"Nilai a dan b sebelumnya : " <<a<<" & "<<b;
    Tukar(a,b);
    cout<<"\nnilai a dan b setelah di tukar : "<<a<<" & "<<b;
    cout<<endl;
    getch();
}
 