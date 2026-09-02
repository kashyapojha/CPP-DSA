#include<iostream>
using namespace std ; 
int main (){
    int num ;
    cout << "Enter a number:-";
    cin >> num;
    if (num % 2 == 0 && num >= 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}