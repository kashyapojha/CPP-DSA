#include <iostream>
using namespace std ; 

int cube(int n){
    return n*n*n;
}



int main (){
    int n;
    cout << "Enter the value of n:-";
    cin >> n;
    cout << "Cube of number:-"<< cube(n);
}