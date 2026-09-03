#include<iostream>
using namespace std;

int main() {
    int n, i = 2;
    bool isPrime = true;

    cout << "Enter the value of n:- ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    }
    else {
        while (i < n) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        cout << "Prime number";
    }
    else {
        cout << "Not a prime number";
    }
}