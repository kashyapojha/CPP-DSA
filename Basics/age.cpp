#include<iostream>
using namespace std ; 
int main (){
    int age ; 
    cout << "Enter your age: " ; 
    cin >> age ;
    if (age > 18) {
        cout << "You are in adult category" << endl ; 
    }
    else if (age > 13 && age < 19) { 
        cout << "You are Teenager" <<endl ;
    }
    else {
        cout << "Enter valid age for category" ; 
    }
}