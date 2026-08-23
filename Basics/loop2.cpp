#include<iostream>
using namespace std ; 
int main (){
    int n , i; 
    cout << "Enter the value for n " ;
    cin >> n;
    for (i = 1 ; i <= n ; i=i+2){
        cout << "Odd numbers from 1 to " << n << " are: " << i << endl;
    } 
}