#include<iostream>
using namespace std ; 
int main (){
    int i , n ; 
    char j ; 
    cout << "Enter the value for n" ;
    cin >> n;
    for (i = 1 ; i<=n ; i++){
        for (j = 1; j<=n-i ; j++){
            cout << "  ";
        }
        for (j = 1 ; j <= i; j++){
            cout << char('E' - j + 1) << " ";
        }
        cout << endl;
    }
}