#include<iostream>
using namespace std; 
int main (){
    int n , i , j ; 
    cout << "Enter the value for n :-";
    cin >> n;
    for (i = 1; i <=n; i++){
        for (j = 1; j<=n-i; j++){
            cout << "  ";
        }
        for (j = 1 ; j<= i; j++){
            cout << char('A' + j - 1) << " ";
        }
        for (j = i - 1; j>=1 ; j--){
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}