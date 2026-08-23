#include<iostream>
using namespace std ; 
int main (){
    int i , j; 
    for (i = 1; i <= 6; i++){
         for (j = 10; j <= 9 + i; j++){
            cout << " "<< j;
        }
        cout << endl;
    }
}