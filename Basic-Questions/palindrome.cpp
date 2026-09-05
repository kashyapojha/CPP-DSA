#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (x < 0) {
        cout << "Not a palindrome";
        return 0;
    }

    int num = x;
    int rem;
    int ans = 0;

    while (num != 0) {
        rem = num % 10;
        num = num / 10;

        if (ans > INT_MAX / 10) {
            cout << "Not a palindrome";
            return 0;
        }

        ans = ans * 10 + rem;
    }

    if (ans == x)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
/*
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        int num=x , rem , ans=0;
        while(num){
            rem=num%10;
            num/=10;
            if(ans>INT_MAX/10)
            return 0;
            ans=ans*10+rem;
        };
        if (ans==x)
        return 1;
        else
        return 0;
    };
};
*/