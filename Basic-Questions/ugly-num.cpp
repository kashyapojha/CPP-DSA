#include<iostream>
using namespace std; 
int main (){
    int x , i; 
    cout <<"Enter value of x:";
    cin >> x;
    if (x<=0){
        cout << "Enter +ve value for x";
    }
    else {
        while ( x % 2 == 0){
            x = x / 2 ; 
        }
        while (x % 3 == 0){
            x = x / 3;
        }
        while (x % 5 == 0){
            x = x / 5;
        }
        if (x == 1){
            cout << "ugly number";
        }
        else{
            cout << "Not an ugly number";
        }
        
    }
}
/*
class Solution {
public:
    bool isUgly(int n) {

        if (n <= 0)
            return false;

        while (n % 2 == 0)
            n = n / 2;

        while (n % 3 == 0)
            n = n / 3;

        while (n % 5 == 0)
            n = n / 5;

        return n == 1;
    }
};
*/