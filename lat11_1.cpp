#include<iostream>
#include<conio.h>
using namespace std;

#define MaxS 10

struct Stack {
    char Isi[MaxS];
    unsigned int Top;
};

void INITS(Stack &S);
void PUSH(Stack &S, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);

int main() {
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
    cout << endl << "Yang Dihapus ........." << huruf;

    CETAK(S);

    cout << endl << "Masukan Karakter: ";
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
    cout << endl << "Yang Dihapus .........." << huruf;

    CETAK(S);

    getch();
}

void INITS(Stack &S) {
    S.Top = 0;
}

void PUSH(Stack &S, char Data) {
    if (S.Top < MaxS) {
        S.Top++;
        S.Isi[S.Top] = Data;
    }
    else {
        cout << "Stack penuh..........";
    }
}

void CETAK(Stack S) {
    int i;
    cout << endl << "Isi Stack: ";
    if (S.Top != 0) {
        for (i = 1; i <= S.Top; i++) {
            cout << S.Isi[i];
        }
    }
    else {
        cout << "Stack Kosong …..";
    }
}

void POP(Stack &S, char &Hsl) {
    if (S.Top != 0) {
        Hsl = S.Isi[S.Top];
        S.Top--;
    }
    else {
        cout << "Stack Kosong…..";
    }
}
