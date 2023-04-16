#include <iostream>

using namespace std;

int main()
{
    int ROW = 3;
    int COL = 3;
    
    // Deklarasi array 2 dimensi
    int arr[ROW][COL] = {{1, 8, 10}, {4, 11, 5},{7, 8, 9}};
    
    // Deklarasi pointer untuk array 2 dimensi
    int *ptr[ROW];
    cout<<endl;
    cout<<"kombinasi pointer dan array 2 dimensi"<<endl;
    // Inisialisasi pointer dengan alamat elemen array 2 dimensi
    for(int i = 0; i < ROW; i++) {
        ptr[i] = arr[i];
    }
    
    // Mengakses elemen array 2 dimensi melalui pointer
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}