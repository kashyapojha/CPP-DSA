// Octal numbers to binary numbers
#include<iostream>
using namespace std;

int main() {
    int octal, decimal = 0, binary = 0;
    int remainder, base = 1, place = 1;

    cout << "Enter octal number: ";
    cin >> octal;

    // Octal to Decimal
    for (; octal > 0; octal = octal / 10) {
        remainder = octal % 10;
        decimal = decimal + remainder * base;
        base = base * 8;
    }

    // Decimal to Binary
    for (; decimal > 0; decimal = decimal / 2) {
        remainder = decimal % 2;
        binary = binary + remainder * place;
        place = place * 10;
    }

    cout << "Binary number = " << binary;

    return 0;
}