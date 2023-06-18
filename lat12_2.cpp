#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

#define MaxS 10
#define MaxElemen 200

//struct program 1
struct Stack {
    char Isi[MaxS];
    unsigned int Top;
};

//struct program 2
struct Tumpukan {
    char Isi[MaxElemen];
    int Atas;
} T;

//struct program 3
typedef struct node *simpul;
struct node {
    char Isi;
    simpul next;
};
//program 1
void program1();
void INITS(Stack &S);
void PUSH(Stack &S, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);

//program 2
void program2();
void PUSH(char x);
char POP();

//program 3
void program3();
void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);

void showMenu() {
    cout << "PROGRAM MENU" << endl;
    cout << "1. Program 1" << endl;
    cout << "2. Program 2" << endl;
    cout << "3. Program 3" << endl;
    cout << "4. Keluar" << endl;
}

int main() {
    int choice;
    do {
        system("clear");
        showMenu();
        cout << "Masukkan pilihan: ";
        cin >> choice;
        if(choice==1){
            program1();
        }
        if(choice==2){
            program2();
        }
        if(choice==3){
            program3();
        }
        if(choice==4){
            cout<<"program selesai";
            cout<<endl;
        }
        cin.ignore();
        cin.get();
    } while (choice != 4);

    return 0;
}

void program1() {
    char huruf;
    Stack S;
    INITS(S);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus ........." << huruf;

    CETAK(S);

    cout << endl
         << "Masukan Karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    cout << "Masukan karakter: ";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus .........." << huruf;

    CETAK(S);
}

void INITS(Stack &S) {
    S.Top = 0;
}

void PUSH(Stack &S, char Data) {
    if (S.Top < MaxS) {
        S.Top++;
        S.Isi[S.Top] = Data;
    } else {
        cout << "Stack penuh.........." << endl;
    }
}

void CETAK(Stack S) {
    int i;
    cout << endl
         << "Isi Stack: ";
    if (S.Top != 0) {
        for (i = 1; i <= S.Top; i++) {
            cout << S.Isi[i];
        }
    } else {
        cout << "Stack Kosong ….." << endl;
    }
}

void POP(Stack &S, char &Hsl) {
    if (S.Top != 0) {
        Hsl = S.Isi[S.Top];
        S.Top--;
    } else {
        cout << "Stack Kosong…..";
    }
}

void program2() {
    int I;
    char Kalimat[MaxElemen];
    T.Atas = 0;
    cout << "Aplikasi Stack untuk Membalik kalimat\n";
    cout << "----------------------------------------\n\n";

    cout << "Masukkan sembarang kalimat : ";
    cin.ignore();
    cin.getline(Kalimat, MaxElemen);

    cout << "Kalimat Asli : " << Kalimat;

    for (I = 0; I < strlen(Kalimat); I++) {
        PUSH(Kalimat[I]);
    }

    cout << "\nKalimat Setelah di Balik : ";

    for (I = 0; I < strlen(Kalimat); I++) {
        cout << POP();
    }
}

void PUSH(char x) {
    if (T.Atas == MaxElemen) {
        cout << "Tumpukan Sudah Penuh";
        cin.get();
    } else {
        T.Atas = T.Atas + 1;
        T.Isi[T.Atas] = x;
    }
}

char POP() {
    char hasil;
    if (T.Atas == 0) {
        cout << "Tumpukan sudah kosong";
        hasil = ' ';
    } else {
        hasil = T.Isi[T.Atas];
        T.Atas = T.Atas - 1;
    }
    return hasil;
}

void program3() {
    char huruf;
    simpul L = NULL;

    cout << "Operasi Single Linked List Pada Stack" << endl
         << endl;

    cout << "Masukkan Elemen: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);

    cout << "Masukkan Elemen: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);

    cout << "Masukkan Elemen: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);

    cout << "Masukkan Elemen: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);

    cout << "Masukkan Elemen: ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);

    Cetak(L);

    cout << endl
         << endl
         << "Hapus Elemen" << endl;

    Hapus_Belakang(L);
    Cetak(L);

    cout << endl
         << endl
         << "Hapus Elemen" << endl;
    Hapus_Belakang(L);
    Cetak(L);

    cout << endl
         << endl
         << "Hapus Elemen" << endl;
    Hapus_Belakang(L);
    Cetak(L);

    cout << endl
         << endl
         << "Hapus Elemen" << endl;
    Hapus_Belakang(L);
    Cetak(L);
}

void Sisip_Belakang(simpul &L, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->next = NULL;

    if (L == NULL)
        L = baru;
    else {
        bantu = L;
        while (bantu->next != NULL)
            bantu = bantu->next;
        bantu->next = baru;
    }
}

void Hapus_Belakang(simpul &L) {
    simpul bantu, hapus;

    if (L == NULL)
        cout << "Linked List Kosong";
    else {
        bantu = L;
        while (bantu->next->next != NULL)
            bantu = bantu->next;

        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}

void Cetak(simpul L) {
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong" << endl;
    else {
        bantu = L;
        while (bantu != NULL) {
            cout << bantu->Isi;
            bantu = bantu->next;
        }
    }
}
