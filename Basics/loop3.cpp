#include<iostream>
using namespace std ; 
int main (){
    int n , i ; 
    cout << "Enter the value of n :- ";
    cin >> n ;
    for ( i = 1 ; i <= n ; i++){
        if (i % 4 == 0){ 
        cout<<"Numbers divisble by 4 are from 1 to" << n << "are:" << i << endl;
    }
}
}