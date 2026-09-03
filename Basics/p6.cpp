// while loop 
/*
#include<iostream>
using namespace std ; 
int main (){
    int n , i = 1 ; 
    int factorial = 1 ; 
    cout << "Enter the value of n :- ";
    cin >> n;
    while (i <= n){
        factorial = factorial * i ;
        i++;
    }
    cout << "Factorial =" << factorial ; 
}
*/
// do while loop 
#include<iostream>
using namespace std ; 
int main (){
    int n , i = 1;
    int factorial = 1;
    cout << "Enter the value of n:-";
    cin >> n;
    do {
        factorial = factorial * i;
        i++ ;
    }
    while (i <= n);
        cout << "Factorial is:-" << factorial ; 
}
