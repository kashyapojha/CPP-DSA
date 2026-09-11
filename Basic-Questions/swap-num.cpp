#include<iostream>
using namespace std ; 

int swap_num(int &a, int &b){    
    a = a + b;   // 7
    b = a - b;   // 3
    a = a - b;    // 4
}

int main (){
    int a,b;
    cout << "Enter the value of a:-";
    cin >> a;
    cout << "Enter the value of b:-";
    cin >> b;

    swap_num(a,b);
    cout << "After Swapping :- "<< a << " "<< b;    // (3,4)
}