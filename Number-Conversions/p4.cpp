// octal to decimal 
#include<iostream>
using namespace std;

int main() {
    int n, decimal = 0, remainder, base = 1;

    cout << "Enter octal number: ";
    cin >> n;

    for (; n > 0; n = n / 10) {
        remainder = n % 10;
        decimal = decimal + remainder * base;
        base = base * 8;
    }

    cout << "Decimal number = " << decimal;

    return 0;
}