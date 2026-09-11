#include<iostream>
using namespace std; 

int combination(int n ,int r){
    int fac = 1;
    for (int i = 1 ; i <=(n-r); i++){
        fac = fac * i;
    }
    int fact = 1;
    for (int i = 1 ; i <=n; i++){
        fact = fact * i;
    }

    int factorial = 1;
    for (int i = 1 ; i <=r; i++){ 
        factorial = factorial * i;
    }

    int ncr = fact / (fac * factorial);
    return ncr;
}


int main (){
    int n , r;
    cout << "Enter the value of n:-";
    cin >> n;
    cout << "Enter the value of r:-";
    cin >> r;
    cout << "Value of nCr is :- "<< combination (n,r);




}