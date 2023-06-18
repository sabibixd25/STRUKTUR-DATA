#include <iostream>
#include <iomanip>
using namespace std;

void maxsortsecaranaik()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;

    cout << "Masukkan Banyaknya Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak sebelum diurutkan
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imaks = 0;
        for (j = 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        U--;
        cout << endl;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[1];
    }
    cout << "\nData Setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
    cout << endl
         << endl;
}

void maxsortsecaraturun()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;

    cout << "Masukkan Banyaknya Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData Sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imaks = i;
        for (j = i + 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        cout << endl;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }
    cout << "\nData Setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
    cout << endl
         << endl;
}

void minsortsecaranaik()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, Imin;

    cout << "Masukkan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum Diurutkan
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses pengurutan
    for (i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for (j = i + 1; j < N; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
        cout << endl;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }
    cout << "\nData Setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
    cout << endl
         << endl;
}

void minsortsecaraturun()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imin;

    cout << "Masukkan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imin = 0;
        for (j = 1; j <= U; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imin];
        Nilai[Imin] = temp;
        cout << endl;
        U--;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }
    cout << "\nData Setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];
    cout << endl
         << endl;
}

int main()
{
menu:
    int pilihan;
    
    cout << "--------Menu----------\n";
    cout << " 1.Metode Maximum Sort (Pengurutan secara menaik)\n";
    cout << " 2.Metode Maximum Sort (Pengurutan secara menurun)\n";
    cout << " 3.Metode Minimum Sort (Pengurutan secara menaik)\n";
    cout << " 4.Metode Minimum Sort (Pengurutan secara menurun)\n";
    cout << " 5.Exit\n";
    cout << "----------------------\n";
    cout << "Masukkan Pilihan anda : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1 :
            maxsortsecaranaik();
            goto menu;
            break;
    case 2 :
            maxsortsecaraturun();
            goto menu;
            break;
    case 3 : 
            minsortsecaranaik();
            goto menu;
            break;
    case 4 : 
            minsortsecaraturun();
            goto menu;
            break;
    case 5 : 
            cout<<"Program Selesai";
            cout<<endl;
            break;
    default:
            cout<<"Pilihan anda tidak valid!";
            cout<<endl;
            break;
    }   
}
    
   
