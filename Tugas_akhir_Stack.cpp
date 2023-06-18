#include <iostream>
#include <stack>
using namespace std;

string decimalToBinary(int decimal) {
    stack<int> binaryStack;
    
    while (decimal > 0) {
        int remainder = decimal % 2;
        binaryStack.push(remainder);
        decimal /= 2;
    }
    
    string binary = "";
    while (!binaryStack.empty()) {
        binary += to_string(binaryStack.top());
        binaryStack.pop();
    }
    
    return binary;
}

int main() {
    int decimal;
    cout << "Masukkan bilangan desimal: ";
    cin >> decimal;
    
    string binary = decimalToBinary(decimal);
    cout << "Bilangan biner: " << binary << endl;
    
    return 0;
}
