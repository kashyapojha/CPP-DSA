// Decimal to Octal 
#include<iostream>
using namespace std;

int main() {
    int n, octal = 0, remainder, place = 1;

    cout << "Enter decimal number: ";
    cin >> n;

    for (; n > 0; n = n / 8) {
        remainder = n % 8;
        octal = octal + remainder * place;
        place = place * 10;
    }

    cout << "Octal number = " << octal;

    return 0;
}