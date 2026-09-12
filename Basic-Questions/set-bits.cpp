#include <iostream>
using namespace std;

int dec_bin(int n, int rem[]) {

    if (n == 0) {
        rem[0] = 0;
        return 1;
    }

    int i = 0;

    while (n > 0) {
        rem[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << rem[j];
    }

    return i;
}

int set_count(int rem[], int size) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (rem[i] == 1) {
            count++;
        }
    }

    return count;
}

int main() {

    int n;
    int rem[32];

    cout << "Enter a decimal number: ";
    cin >> n;

    cout << "Binary: ";

    int size = dec_bin(n, rem);

    cout << endl;

    cout << "Number of set bits are: ";
    cout << set_count(rem, size);

    return 0;
}