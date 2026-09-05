#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int ans = 0, rem;

    while (x != 0) {
        rem = x % 10;
        x = x / 10;

        // Check for overflow
        if (ans > INT_MAX / 10 ||
            (ans == INT_MAX / 10 && rem > 7)) {
            cout << "0";
            return 0;
        }

        // Check for underflow
        if (ans < INT_MIN / 10 ||
            (ans == INT_MIN / 10 && rem < -8)) {
            cout << "0";
            return 0;
        }

        ans = ans * 10 + rem;
    }

    cout << "Reversed number: " << ans;

    return 0;
}



/*class Solution {
public:
    int reverse(int x) {
        int ans = 0, rem ; 
        while (x){
            rem = x%10; 
            x/=10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)  // hnadling int overflow situation
            return 0;
            ans = ans*10+rem;
        }
        return ans;
        
    }
};
*/
