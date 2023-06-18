#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef struct node *simpul;
struct node {
    char Isi;
    simpul Next;
};

// Prototype Function
void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Depan(simpul &L);
void Cetak(simpul L);

// Function Main
int main() {
    char huruf;
    simpul L = NULL; // Pastikan bahwa L kosong
    cout << "==OPERASI PADA SINGLE LINKED LIST==" << endl << endl;

    int pilihan;
    do {
        cout << "Menu:" << endl;
        cout << "1. Penyisipan Simpul" << endl;
        cout << "2. Hapus Simpul Depan" << endl;
        cout << "3. Cetak Linked List" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                // Sisip Belakang
                cout << "\nPenyisipan Simpul \n\n";
                for (int i = 1; i <= 3; i++) {
                    cout << "Masukan Huruf: ";
                    cin >> huruf;
                    Sisip_Belakang(L, huruf);
                }
                break;
            case 2:
                cout << "\nHapus Simpul Depan" << endl;
                Hapus_Depan(L);
                break;
            case 3:
                cout << "\nIsi Linked List: ";
                Cetak(L);
                cout << endl;
                break;
            case 4:
                cout << "\nTerima kasih!" << endl;
                break;
            default:
                cout << "\nPilihan tidak valid!" << endl;
                break;
        }

        cout << endl;

    } while (pilihan != 4);

    getch();
}

// Function Sisip Simpul Di Belakang
void Sisip_Belakang(simpul &L, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else {
        bantu = L;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}

// Function Mencetak Isi Linked List
void Cetak(simpul L) {
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong" << endl;
    else {
        bantu = L;
        while (bantu->Next != NULL) {
            cout << bantu->Isi << "->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi;
    }
}

// Function Hapus Simpul Depan
void Hapus_Depan(simpul &L) {
    simpul Hapus;
    if (L == NULL)
        cout << "Linked List Kosong" << endl;
    else {
        Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}
