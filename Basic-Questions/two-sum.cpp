#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 9) {
        int ans = 0;
        int rem;

        while (num != 0) {
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }

        num = ans;
    }

    cout << "Single digit: " << num;

    return 0;
}

/*
#include<iostream>
using namespace std ; 
int main (){
    int ans = 0, rem , num;
        while(num>9 && num!=0){
                rem = num%10;
                num/=10;
                ans+=rem;
        }
        num = ans;
    }
    cout << num ;
*/













class Solution {
public:
    int addDigits(int num) {

        while(num>9)
        {
            int ans = 0, rem;
            while (num!=0){
                rem = num%10;
                num/=10;
                ans+=rem;
        }
        num = ans;
    }
    return num ;
    } 
};