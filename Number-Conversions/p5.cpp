// binary to octal 

#include<iostream>
using namespace std;

int main() {
    int binary, decimal = 0, octal = 0;
    int remainder, base = 1, place = 1;

    cout << "Enter binary number: ";
    cin >> binary;

    // Binary to Decimal
    for (; binary > 0; binary = binary / 10) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
    }

    // Decimal to Octal
    for (; decimal > 0; decimal = decimal / 8) {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        place = place * 10;
    }

    cout << "Octal number = " << octal;

    return 0;
}