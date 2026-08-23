#include<iostream>
using namespace std ;
int main (){
    int i , n , sum = 0; 
    cout << "Enter the value of n:-";
    cin >> n;
    for (i = 1 ; i <= n ; i++){
        sum = sum + i*i*i;
    }
    cout << "Value of sum" << sum << endl;
}