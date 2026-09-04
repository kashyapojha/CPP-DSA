// Decimal to Binary 

#include<iostream>
using namespace std;

int main() {
    int n, binary = 0, remainder, place = 1;

    cout << "Enter decimal number: ";
    cin >> n;

    for (; n > 0; n = n / 2) {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
    }

    cout << "Binary number = " << binary;

    return 0;
}