#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Deklarasi struktur simpul untuk program 1
typedef struct node *simpul;
struct node {
    char Isi;
    simpul Next;
};

// Deklarasi fungsi untuk program 1
void program1();
void Sisip_Depan(simpul &L, char elemen);
void Sisip_Belakang(simpul &L, char elemen);
void Sisip_Tengah1(simpul &L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &L, char elemen1, char elemen2);
void Hapus_Depan(simpul &L);
void Hapus_Belakang(simpul &L);
void Hapus_Tengah(simpul &L, char elemen);
void Cetak(simpul L);

// Deklarasi struktur simpul untuk program 2
typedef struct node2 *simpul2;
struct node2 {
    char Isi;
    simpul2 kanan;
    simpul2 kiri;
};

// Deklarasi fungsi untuk program 2
void program2();
void Sisip_Depan(simpul2 &DL, char elemen);
void Sisip_Belakang(simpul2 &DL, char elemen);
void Sisip_Tengah1(simpul2 &DL, char elemen1, char elemen2);
void Sisip_Tengah2(simpul2 &DL, char elemen1, char elemen2);
void Hapus_Depan(simpul2 &DL);
void Hapus_Belakang(simpul2 &DL);
void Hapus_Tengah(simpul2 &DL, char elemen);
void Cetak(simpul2 DL);

// Fungsi untuk menampilkan menu
void showMenu() {
    cout << "PROGRAM MENU" << endl;
    cout << "1. Singly LInked List" << endl;
    cout << "2. Doubly Linked List" << endl;
    cout << "3. Keluar" << endl;
}
    int main() {
        int choice;
        do {
            showMenu();
            cout << "Masukkan pilihan: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    program1();
                    break;
                case 2:
                    program2();
                    break;
                case 3:
                    cout << "Terima kasih!" << endl;
                    break;
                default:
                    cout << "Pilihan tidak valid!" << endl;
                    break;
            }
            getch(); // menunggu input dari user
        } while (choice != 3);

        return 0;
}

// Implementasi fungsi program 1
void program1() {
    char huruf, huruf2;
    simpul L = NULL; // Pastikan bahwa L kosong
    cout << "==OPERASI PADA SINGLE LINKED LIST==" << endl << endl;
    // Sisip Depan
    cout << "Penyisipan Simpul Di Depan" << endl << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Masukan Huruf : ";
        cin >> huruf;
        Sisip_Depan(L, huruf);
    }
    Cetak(L);

    // Sisip Belakang
    cout << "\n\nPenyisipan Simpul Di Belakang" << endl << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(L, huruf);
    }
    Cetak(L);

    // Sisip simpul setelah simpul tertentu
    cout << endl << endl << "Masukan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(L, huruf, huruf2);
    Cetak(L);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl << endl << "Masukan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(L, huruf, huruf2);
    Cetak(L);

    // hapus simpul depan
    cout << endl << endl << "Setelah Hapus Simpul Depan " << endl;
    Hapus_Depan(L);
    Cetak(L);

    // hapus simpul belakang
    cout << endl << endl << "Setelah Hapus Simpul Belakang " << endl;
    Hapus_Belakang(L);
    Cetak(L);

    // hapus simpul tengah
    cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus ";
    cin >> huruf;
    Hapus_Tengah(L, huruf);
    Cetak(L);
    getch();
}

// Implementasi fungsi Sisip_Depan untuk program 1
void Sisip_Depan(simpul &L, char elemen) {
    simpul baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else {
        baru->Next = L;
        L = baru;
    }
}

// Implementasi fungsi Sisip_Tengah1 untuk program 1
void Sisip_Tengah1(simpul &L, char elemen1, char elemen2) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen1;
    baru->Next = NULL;
    if (L == NULL)
        cout << "List Kosong ............." << endl;
    else {
        bantu = L;
        while (bantu->Isi != elemen2)
            bantu = bantu->Next;
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

// Implementasi fungsi Sisip_Tengah2 untuk program 1
void Sisip_Tengah2(simpul &L, char elemen1, char elemen2) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen1;
    baru->Next = NULL;
    if (L == NULL)
        cout << "List Kosong.............." << endl;
    else {
        bantu = L;
        while (bantu->Next->Isi != elemen2)
            bantu = bantu->Next;
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

// Implementasi fungsi Sisip_Belakang untuk program 1
void Sisip_Belakang(simpul &L, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
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

// Implementasi fungsi Cetak untuk program 1
void Cetak(simpul L) {
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong ........" << endl;
    else {
        bantu = L;
        cout << "Isi Linked List : ";
        while (bantu->Next != NULL) {
            cout << bantu->Isi << "-->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi << endl;
    }
}

// Implementasi fungsi Hapus_Depan untuk program 1
void Hapus_Depan(simpul &L) {
    simpul Hapus;
    if (L == NULL)
        cout << "Linked List Kosong.............";
    else {
        Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}

// Implementasi fungsi Hapus_Belakang untuk program 1
void Hapus_Belakang(simpul &L) {
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong.............";
    else {
        bantu = L;
        while (bantu->Next->Next != NULL)
            bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = NULL;
        free(hapus);
        cout << endl;
    }
}

// Implementasi fungsi Hapus_Tengah untuk program 1
void Hapus_Tengah(simpul &L, char elemen) {
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong.............";
    else {
        bantu = L;
        while (bantu->Next->Isi != elemen)
            bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = bantu->Next->Next;
        hapus->Next = NULL;
        free(hapus);
        cout << endl;
    }
}

// Implementasi fungsi program 2
void program2() {
    simpul2 DL = NULL; // Pastikan bahwa DL kosong
    char huruf, huruf2;
    cout << "==OPERASI PADA DOUBLY LINKED LIST==" << endl << endl;
    // Sisip Depan
    cout << "Penyisipan Simpul Di Depan" << endl << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Depan(DL, huruf);
    }
    Cetak(DL);

    // Sisip Belakang
    cout << "\n\nPenyisipan Simpul Di Belakang" << endl << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(DL, huruf);
    }
    Cetak(DL);

    // Sisip simpul setelah simpul tertentu
    cout << endl << endl << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf: ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(DL, huruf, huruf2);
    Cetak(DL);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl << endl << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(DL, huruf, huruf2);
    Cetak(DL);

    // hapus simpul depan
    cout << endl << endl << "Setelah Hapus Simpul Depan " << endl;
    Hapus_Depan(DL);
    Cetak(DL);

    // hapus simpul belakang
    cout << endl << endl << "Setelah Hapus Simpul Belakang " << endl;
    Hapus_Belakang(DL);
    Cetak(DL);

    // hapus simpul tengah
    cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus ";
    cin >> huruf;
    Hapus_Tengah(DL, huruf);
    Cetak(DL);
    getch();
}

// Implementasi fungsi Sisip_Depan untuk program 2
void Sisip_Depan(simpul2 &DL, char elemen) {
    simpul2 baru = new node2;
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        DL = baru;
    else {
        baru->kanan = DL;
        DL->kiri = baru;
        DL = baru;
    }
}

// Implementasi fungsi Sisip_Tengah1 untuk program 2
void Sisip_Tengah1(simpul2 &DL, char elemen1, char elemen2) {
    simpul2 bantu, baru;
    baru = new node2;
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        cout << "List Kosong ............." << endl;
    else {
        bantu = DL;
        while (bantu->Isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        bantu->kanan->kiri = baru;
        baru->kiri = bantu;
        bantu->kanan = baru;
    }
}

// Implementasi fungsi Sisip_Tengah2 untuk program 2
void Sisip_Tengah2(simpul2 &DL, char elemen1, char elemen2) {
    simpul2 bantu, baru;
    baru = new node2;
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        cout << "List Kosong.............." << endl;
    else {
        bantu = DL;
        while (bantu->kanan->Isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        bantu->kanan->kiri = baru;
        baru->kiri = bantu;
        bantu->kanan = baru;
    }
}

// Implementasi fungsi Sisip_Belakang untuk program 2
void Sisip_Belakang(simpul2 &DL, char elemen) {
    simpul2 bantu, baru;
    baru = new node2;
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;
    if (DL == NULL)
        DL = baru;
    else {
        bantu = DL;
        while (bantu->kanan != NULL)
            bantu = bantu->kanan;
        bantu->kanan = baru;
        baru->kiri = bantu;
    }
}

// Implementasi fungsi Cetak untuk program 2
void Cetak(simpul2 DL) {
    simpul2 bantu;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong ........" << endl;
    else {
        bantu = DL;
        cout << "Isi Doubly Linked List (kiri-kanan): ";
        while (bantu->kanan != NULL) {
            cout << bantu->Isi << "<->";
            bantu = bantu->kanan;
        }
        cout << bantu->Isi << endl;
        cout << "Isi Doubly Linked List (kanan-kiri): ";
        while (bantu != NULL) {
            cout << bantu->Isi << "<->";
            bantu = bantu->kiri;
        }
        cout << "NULL" << endl;
    }
}

// Implementasi fungsi Hapus_Depan untuk program 2
void Hapus_Depan(simpul2 &DL) {
    simpul2 Hapus;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong.............";
    else {
        Hapus = DL;
        DL = DL->kanan;
        if (DL != NULL)
            DL->kiri = NULL;
        Hapus->kanan = NULL;
        delete Hapus;
    }
}

// Implementasi fungsi Hapus_Belakang untuk program 2
void Hapus_Belakang(simpul2 &DL) {
    simpul2 bantu, hapus;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong.............";
    else {
        bantu = DL;
        while (bantu->kanan->kanan != NULL)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan = NULL;
        hapus->kiri = NULL;
        delete hapus;
        cout << endl;
    }
}

// Implementasi fungsi Hapus_Tengah untuk program 2
void Hapus_Tengah(simpul2 &DL, char elemen) {
    simpul2 bantu, hapus;
    if (DL == NULL)
        cout << "Doubly Linked List Kosong.............";
    else {
        bantu = DL;
        while (bantu->kanan->Isi != elemen)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan = bantu->kanan->kanan;
        hapus->kanan->kiri = bantu;
        hapus->kanan = NULL;
        hapus->kiri = NULL;
        delete hapus;
        cout << endl;
    }
}
