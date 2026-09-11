#include<iostream>
using namespace std; 

int rev_num(int n){
    int rev = 0;
    while (n>0){
        int digit = n % 10;  
        rev = rev * 10 + digit;
        n = n/10; 
    }
    return rev;

}


int main (){
    int n; 
    cout << "Enter the value of n:-";
    cin >> n;
    cout << "Reverse-number"<< rev_num(n);
    return 0;

}