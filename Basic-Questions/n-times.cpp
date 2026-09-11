#include<iostream>
using namespace std ; 

void hello_world(int n){
    for (int i=1; i<=n; i++){
        cout << "Hello World"<<endl;
    }
}

int main (int n){
    cout << "Enter the value of n:-";
    cin >> n;
    hello_world(n);
}