#include<iostream>
using namespace std; 
int main (){
    int i , n , j ;
    cout << "Enter the value for n:- ";
    cin >> n;
    for (i = 1; i<=n ; i++){
        for (j = 1; j<=n-i; j++){
            cout << "  ";
        }
        for (j = 1 ; j <= i ; j++){
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}