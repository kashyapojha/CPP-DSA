#include<iostream>
using namespace std ; 
int main (){
    int i;
    char j;
    for (i = 1 ; i <=5 ; i++){
        for (j = 'A'; j <= 'A' + i-1 ; j++){
            cout << " "<< j ; 
        }
        cout << endl ;
    }
}