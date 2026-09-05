/*
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int ans = 0, mul=1, rem;
        while(n)
        {
            rem = n%2;
            rem = rem^1;
            n/=2;
            ans = ans+rem*mul;
            mul*=2;
        }

        return ans;

        
    }
};
*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    int ans = 0;
    int mul = 1;
    int rem;

    while (n) {
        rem = n % 2;

        // Flip the bit: 0 -> 1, 1 -> 0
        rem = rem ^ 1;

        n = n / 2;

        ans = ans + rem * mul;

        mul = mul * 2;
    }

    cout << "Bitwise complement: " << ans;

    return 0;
}