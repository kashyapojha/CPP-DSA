#include<iostream>
using namespace std ; 
int main (){
    int age ; 
    cout << "Enter your age :-";
    cin >> age ;
    if (age > 0 && age < 12 ){
        cout << "Discount available";
    }
    else if (age > 65){
        cout << "Discount available";
    }
    else {
        cout << "No discount";
    }
}