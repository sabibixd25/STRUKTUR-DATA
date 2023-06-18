#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    system("clear");
    int i, j, len, flag = 1;
    char a[20];

    cout << "Masukkan Kalimat: ";
    cin.getline(a, 20);

    for (len = 0; a[len] != '\0'; ++len);

    for (i = 0, j = len - 1; i < len / 2; ++i, --j)
    {
        if (a[j] != a[i])
            flag = 0;
    }

    if (flag == 1)
        cout << "\nKalimat Ini adalah Kalimat Palindrome" << endl;
    else
        cout << "\nKalimat Ini Bukan Kalimat Palindrome" << endl;

    getch();
}
