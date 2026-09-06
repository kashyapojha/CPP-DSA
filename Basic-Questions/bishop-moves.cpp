#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int count = 0, A, B;

    cin >> A >> B;

    // Top-right
    count += min(8 - A, 8 - B);

    // Top-left
    count += min(8 - A, B - 1);

    // Bottom-left
    count += min(A - 1, B - 1);

    // Bottom-right
    count += min(A - 1, 8 - B);

    cout << count;

    return 0;
}