#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Shell Sort
void shellSort(vector<string>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            string temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

// Insertion Sort
void insertionSort(vector<string>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<string> data = {"suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang"};

    // Shell Sort
    cout << "Data sebelum diurutkan (Shell Sort): ";
    for (const string& str : data) {
        cout << str << " ";
    }
    cout << endl;
    shellSort(data);
    cout << "Data setelah diurutkan (Shell Sort): ";
    for (const string& str : data) {
        cout << str << " ";
    }
    cout << endl;

    // Reset data
    data = {"suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang"};

    // Insertion Sort
    cout << "Data sebelum diurutkan (Insertion Sort): ";
    for (const string& str : data) {
        cout << str << " ";
    }
    cout << endl;
    insertionSort(data);
    cout << "Data setelah diurutkan (Insertion Sort): ";
    for (const string& str : data) {
        cout << str << " ";
    }
    cout << endl;

    // Sort dengan menggunakan fungsi sort dari library algorithm
    cout << "Data setelah diurutkan (sort dari library algorithm): ";
    sort(data.begin(), data.end());
    for (const string& str : data) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
