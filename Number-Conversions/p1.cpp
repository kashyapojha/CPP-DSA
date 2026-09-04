// ●	Write a program to convert binary numbers to decimal numbers using a for loop.
#include<iostream>
using namespace std;

int main() {
    int n, decimal = 0, base = 1, remainder;

    cout << "Enter binary number: ";
    cin >> n;

    for (; n > 0; n = n / 10) {
        remainder = n % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
    }

    cout << "Decimal number = " << decimal;

    return 0;
}